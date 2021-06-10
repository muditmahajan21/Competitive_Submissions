/*
 * @lc app=leetcode id=63 lang=cpp
 *
 * [63] Unique Paths II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int i, j;
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        if(obstacleGrid[0][0])
        {
            return 0;
        }
        vector<vector<int>> dp(m + 5, vector<int>(n + 5, 0));
        dp[0][1] = 1;

        for(i = 1; i <= m; i++)
        {
            for(j = 1; j <= n; j++)
            {
                if(!obstacleGrid[i - 1][j - 1])
                {
                    dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
                }
            }
        }

        return dp[m][n];
    }
};
// @lc code=end

