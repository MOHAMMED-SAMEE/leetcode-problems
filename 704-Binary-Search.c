int search(int* nums, int numsSize, int target) {
    int n=numsSize,low=0;
    for(int i=0;i<n;i++){
        if(nums[i]==target){
            return i;
        }

    }
    return -1;
    
}