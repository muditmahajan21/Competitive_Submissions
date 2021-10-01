/*
 * @lc app=leetcode id=740 lang=cpp
 *
 * [740] Delete and Earn
 */

// @lc code=start
class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int> value(10001, 0);
        for(int i = 0; i < nums.size(); i++)
        {
            value[nums[i]] += nums[i];
        }
        vector<int> dp(10001, 0);
        dp[1] = value[1];
        dp[2] = max(value[1], value[2]);

        for(int i = 3; i < dp.size(); i++)
        {
            dp[i] = max(dp[i - 2] + value[i], dp[i - 1]);
        }

        int ans = max(dp[10000], dp[9999]);
        return ans;
    }
};
// @lc code=end

