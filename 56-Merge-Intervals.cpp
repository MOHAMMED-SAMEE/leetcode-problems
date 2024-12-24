class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr){
        sort(arr.begin(),arr.end());
        vector<vector<int>> narr;
        int n=arr.size();
        int st=arr[0][0],end=arr[0][1];
        for(int i=1;i<arr.size();i++){
            if(end<arr[i][0]){
                narr.push_back({st,end});
                st=arr[i][0];
                end=arr[i][1];

            }
            else{
                end=max(end,arr[i][1]);
            }
        }
        narr.push_back({st,end});
        return narr;
    }
};