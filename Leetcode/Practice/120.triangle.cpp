/*
 * @lc app=leetcode id=120 lang=cpp
 *
 * [120] Triangle
 */

// @lc code=start
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int i, j, m, n;
        n = triangle.size();
        vector<int> ans = triangle[n - 1];

        for(i = n - 2; i>= 0; --i)
        {
            for(j = 0; j < triangle[i].size(); ++j)
            {
                ans[j] = triangle[i][j] + min(ans[j], ans[j + 1]);
            }
        }
        return ans[0];
    }
};
// @lc code=end

