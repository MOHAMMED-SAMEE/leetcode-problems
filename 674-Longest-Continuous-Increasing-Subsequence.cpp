class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1,m=1;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                count+=1;
            }
            else{
                count=1;
            }
            m=max(count,m);
        }
        return m;
    }
};