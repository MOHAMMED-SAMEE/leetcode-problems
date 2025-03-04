class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int a=0,b=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i]>0){
                a++;
            }
            else if(nums[i]==0){
                a++;
                a--;
            }
            else{
                b++;
            }
        }
        int maxi=max(a,b);
        return maxi;
    }
};