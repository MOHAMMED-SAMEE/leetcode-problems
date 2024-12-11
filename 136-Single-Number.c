int singleNumber(int* nums, int numsSize){
    int i,res=nums[0];
    for(i=1;i<numsSize;i++)
    {
        res=res^nums[i];
    }
    return res;

}