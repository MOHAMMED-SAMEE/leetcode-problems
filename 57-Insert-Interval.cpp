class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        arr1.push_back(arr2);
        vector<vector<int>>arr3;
        sort(arr1.begin(),arr1.end());
        int st=arr1[0][0],end=arr1[0][1];
        for(int i=1;i<=n;i++){
            if(end<arr1[i][0]){
                arr3.push_back({st,end});
                st=arr1[i][0];
                end=arr1[i][1];
            }
            else{
                end=max(end,arr1[i][1]);
            }
        }
        arr3.push_back({st,end});
        return arr3;
    }
};