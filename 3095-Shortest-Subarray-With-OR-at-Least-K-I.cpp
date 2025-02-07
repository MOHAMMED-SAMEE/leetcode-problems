class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
        int mi=INT_MAX;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum |=nums[j];
                if(sum>k || sum==k){
                   mi=min(j-i+1,mi);
                }
            }
        }
        if(mi==INT_MAX) return -1;
        return mi;
    }
};