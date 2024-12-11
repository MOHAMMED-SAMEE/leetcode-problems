class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        int mod=k%n;
        int f=n-mod;
        int arr[n];
        int j=0;
        for(int i=f;i<n;i++){
            arr[j]=nums[i];
            j++;
        }
        for(int i=0;i<f;i++){
            arr[j]=nums[i];
            j++;
        }
        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }

    }
};