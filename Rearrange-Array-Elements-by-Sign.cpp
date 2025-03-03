class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans, ans1, ans2;
        for (int i = 0; i < nums.size(); i++) {
            (nums[i] > 0 ? ans1 : ans2).push_back(nums[i]);
        }
        for (int i = 0; i < ans1.size(); i++) {
            ans.push_back(ans1[i]);
            ans.push_back(ans2[i]);
        }
        return ans;
    }
};