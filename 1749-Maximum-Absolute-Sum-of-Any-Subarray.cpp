class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int n=nums.size();
        int maxres=INT_MIN;
        int minres=INT_MAX;
        int sum=0;
        for(int i:nums){
            sum+=i;
            sum=max(sum,0);
            maxres=max(maxres,sum);
        }
        sum=0;
        for(int i:nums){
            sum+=i;
            sum=min(sum,0);
            minres=min(minres,sum);
        }
        minres=-minres;
        return max(maxres,minres);

    }
};