
int process(int* nums, int n, int k){
    int oddCn =0;
    int r = 0, l = 0;
    int ans = 0;
    for(r = 0; r < n; r++){
        if(nums[r]%2 )
            oddCn++;
        while(oddCn > k){
            if(nums[l]%2)
                oddCn--;
            l++;
        }
        ans += r - l + 1 ;
    }
    return ans;
}
int numberOfSubarrays(int* nums, int numsSize, int k){
    return process(nums, numsSize, k) - process(nums, numsSize, k-1);
}