class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        std::sort(points.begin(), points.end(), [](const auto& a, const auto& b) {
            return a[1] < b[1];
        });
        int ans = 1;
        int arrow = points[0][1];
        for(int i=1;i<points.size();++i){
            if(points[i][0] > arrow){
                arrow = points[i][1];
                ++ans;
            }
        }
        return ans;
    }
};