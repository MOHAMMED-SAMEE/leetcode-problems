class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int repeated = 0;
        int no;
        int m = grid[0].size();
        vector<int> rep, vec;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                vec.push_back(grid[i][j]);
            }
        }
        sort(vec.begin(), vec.end());
        for (int i = 1; i < vec.size(); i++) {
            if (vec[i] == vec[i - 1]) {
                repeated = vec[i];
            }
        }
        unordered_set<int> s(vec.begin(), vec.end());
        for (int i = 1; i <= n * m; i++) {
            if (s.find(i) == s.end()) {
                no = i;
                break;
            }
        }
        rep.push_back(repeated);
        rep.push_back(no);
        return rep;
    }
};