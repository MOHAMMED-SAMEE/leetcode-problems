class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> vec;
        int start=nums[0][0],end=nums[0][1];
        for(int i=1;i<nums.size();i++){
            if(nums[i][0]>end){
                vec.push_back({start,end});
                start=nums[i][0];
                end=nums[i][1];
            }
            else{
                end=max(end,nums[i][1]);
            }
        }
        vec.push_back({start,end});
        return vec;
    }
};