class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        vector<int> vec;
        int n = nums.size();
        int start = nums[0][0], end = nums[0][1];

        for (int k = 0; k < nums.size(); k++) {
            int start = nums[k][0], end = nums[k][1];

            for (int i = start; i <= end; i++) {
                vec.push_back(i);
            }
        }
        sort(vec.begin(),vec.end());
        int f=0;
        unordered_set<int>s(vec.begin(),vec.end());
        return s.size();
        
    }
};