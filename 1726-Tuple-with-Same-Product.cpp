class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n=0;
        unordered_map<int,int> c;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                n+=c[nums[i]*nums[j]]++ * 8;
            }
        }
        return n;
    }
};