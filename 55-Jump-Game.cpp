#include <vector>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > maxReach) return false; // Cannot proceed further
            maxReach = max(maxReach, i + nums[i]);
            if (maxReach >= nums.size() - 1) return true; // Reached or surpassed last index
        }
        return false;
    }
};