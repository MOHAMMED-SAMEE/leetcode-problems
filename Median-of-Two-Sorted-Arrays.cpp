class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double m=0;
        vector<int> arr1;
        nums1.insert(nums1.end(),nums2.begin(),nums2.end());
        sort(nums1.begin(),nums1.end());
        int l=0,r=nums1.size()-1;
        int mid=l+(r-l)/2;
        if(nums1.size()%2!=0){
            m=nums1[mid];
        }else{
            int n=nums1.size()/2;
            m=(nums1[n]+nums1[n-1])/2.0;
        }
        return m;
        
    }
};