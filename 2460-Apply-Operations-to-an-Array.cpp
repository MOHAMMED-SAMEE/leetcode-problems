class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n = nums.size();
		// checking for the n- 1 conditions 
        for(int i = 0; i < n - 1 ; i++){
            if(nums[i] == nums[i+1]){
                nums[i] *= 2;
                nums[i+1] = 0;
            }
        }
		// using two pointers to push numbers to end
        int sp = 0;
        for(int i = 0 ; i < n ; i++){
            if(nums[i]){
                swap(nums[i] , nums[sp++]);
            }
        }
        return nums;
    }
};