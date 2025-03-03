class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left, middle, right;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i]< pivot) {
                left.push_back(nums[i]);
            } else if (nums[i] == pivot) {
                middle.push_back(nums[i]);
            } else {
                right.push_back(nums[i]);
            }
        }
        vector<int> result;
        result.insert(result.end(), left.begin(), left.end());
        result.insert(result.end(), middle.begin(), middle.end());
        result.insert(result.end(), right.begin(), right.end());

        return result;
    }
};
