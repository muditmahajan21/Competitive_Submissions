/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        int n = nums.size();
        int i;
        vector<int> dp(n + 1, 0);
        dp[1] = nums[0];

        for(i = 2; i <= n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + nums[i - 1]);
        }
        return dp[n];
    }
};
// @lc code=end

