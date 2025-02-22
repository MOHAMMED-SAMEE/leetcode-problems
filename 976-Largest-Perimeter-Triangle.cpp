class Solution {
public:
    int largestPerimeter(vector<int>& a) {
        sort(a.begin(),a.end());
        for(int i=a.size()-1;i>1;i--){
            if(a[i]<a[i-1]+a[i-2]){
                return a[i]+a[i-1]+a[i-2];
            }
        }
        return 0;
    }
};