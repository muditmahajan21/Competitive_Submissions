/*
 * @lc app=leetcode id=62 lang=cpp
 *
 * [62] Unique Paths
 */

// @lc code=start
class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[m + 5][n + 5];

        int i, j;

        for(i = 0; i < m; i++)
        {
            dp[i][0] = 1;
        }
        for(i = 0; i < n; i++)
        {
            dp[0][i] = 1;
        }

        for(i = 1; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            }
        }

        return dp[m - 1][n - 1];
    }
};
// @lc code=end

