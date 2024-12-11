class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> on;
        int res=0;
        int n=nums.size();
        int mat=0;
        for(int n:nums){
            on[n]=1+on[n];
            if(on[n]>mat){
                res=n;
                mat=on[n];

            }
        }
        return res;
        
    }
};