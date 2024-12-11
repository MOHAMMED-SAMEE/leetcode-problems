int climbStairs(int n) {
    int i=0,j=1,k,count=0;
    while(count!=n)
    {
        k=i+j;
        i=j;
        j=k;
        count++; 
    }
    return k;

}