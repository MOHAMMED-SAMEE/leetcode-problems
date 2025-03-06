class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        unordered_set<int>s;
        int n = nums.size();
        int start = nums[0][0], end = nums[0][1];

        for (int k = 0; k < nums.size(); k++) {
            int start = nums[k][0], end = nums[k][1];

            for (int i = start; i <= end; i++) {
                s.insert(i);
            }
        }
        
        return s.size();
        
    }
};