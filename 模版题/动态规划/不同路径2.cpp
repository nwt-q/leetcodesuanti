class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int l,r;
        int m =obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int dp[m][n];
        if (obstacleGrid[m - 1][n - 1] == 1 || obstacleGrid[0][0] == 1){
            return 0;
        }
        memset(dp,0,sizeof(dp));
        for (int i = 0; i < m && !obstacleGrid[i][0]; i++) dp[i][0] = 1;
        for (int j = 0; j < n && !obstacleGrid[0][j]; j++) dp[0][j] = 1;
        for (int i = 1;i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (obstacleGrid[i][j] == 1) {continue;}
                dp[i][j] = dp[i-1][j] + dp[i][j - 1];
            }
        }
        return dp[m - 1][n - 1];
    }
};

//路径上遇到障碍物,continue
//https://leetcode.cn/problems/unique-paths-ii/description/
