class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map<int,int> n;
        for(int i=0;i<nums.size();i++){
            int val=nums[i];
            if(n.find(val)!=n.end() && i- n[val]<=k){
                return true;
            }
            n[val]=i;
        }
        return false;
        
    }
};