class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int maxi=0;
         vector<vector<int>> dp(row + 1, vector<int>(col + 1, 0));
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                if(matrix[i-1][j-1]=='0'){
                    dp[i][j]=0;
                }
                else{
                    dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
                }
                maxi=max(maxi,dp[i][j]);
            }
        }
        return maxi*maxi;
    }
};