#define DIFFICULTY_INDEX 0
#define PROFIT_INDEX 1
int maxProfitAssignment(int* difficulty, int difficultySize, int* profit, int profitSize, int* worker, int workerSize) {
    int cmpFuncWorkers(const void* , const void*);
    int cmpFuncJobs(const void* , const void*);
    int** buildJobsArray(int* , int* , int);
    int updateCurrentMax(int** , int , int , int , int*);
    void freeJobsArray(int** , int);
    int n = difficultySize;
    int m = workerSize;
    int** jobs = buildJobsArray(difficulty , profit , n);
    int totalProfit = 0;
    int currMax = 0;
    int i , workerAbility;
    int jobIndex = 0;

    qsort(jobs , n , sizeof(int*) , cmpFuncJobs);
    qsort(worker, m , sizeof(int) , cmpFuncWorkers);

    for(i = 0 ; i < m ; i++){
        workerAbility = worker[i];

        currMax = updateCurrentMax(jobs , n , workerAbility , currMax , &jobIndex);

        totalProfit += currMax;
    }

    freeJobsArray(jobs , n);

    return totalProfit;
}

int cmpFuncWorkers (const void * a, const void * b) {
    return ( *(int*)a - *(int*)b );
}

int cmpFuncJobs(const void* a , const void* b){
    int* job1 = *(int**)a;
    int* job2 = *(int**)b;
    int difficulty1 = job1[DIFFICULTY_INDEX];
    int difficulty2 = job2[DIFFICULTY_INDEX];

    //Compare by difficulty
    return difficulty1 - difficulty2;
}

int** buildJobsArray(int* difficulty , int* profit , int n){
    int** jobs = malloc(n * sizeof(int*));
    int* newJob;
    int i;

    for(i = 0 ; i < n ; i++){
        newJob = malloc(2 * sizeof(int));
        newJob[DIFFICULTY_INDEX] = difficulty[i];
        newJob[PROFIT_INDEX] = profit[i];
        jobs[i] = newJob;
    }

    return jobs;

}

int updateCurrentMax(int** jobs , int n , int maxDifficulty , int currMax , int* indexP){
    int i;
    int startingIndex = *(indexP);
    bool validDifficulty , isBigger;
    int* currJob;
    int d , p;

    for(i = startingIndex ; i < n ; i++){
        currJob = jobs[i];
        d = currJob[DIFFICULTY_INDEX];
        p = currJob[PROFIT_INDEX];

        validDifficulty = d <= maxDifficulty;

        if(!validDifficulty){
            break;
        }

        isBigger = p > currMax;

        if(!isBigger){
            continue;
        }

        currMax = p;
    }

    *(indexP) = i;

    return currMax;

}

void freeJobsArray(int** jobs , int n){
    int i;

    for(i = 0 ; i < n ; i++){
        free(jobs[i]);
    }

    free(jobs);
}