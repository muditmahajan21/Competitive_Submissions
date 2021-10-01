/*
 * @lc app=leetcode id=213 lang=cpp
 *
 * [213] House Robber II
 */

// @lc code=start
class Solution {
public:
    int rob_helper(vector<int>& nums) {
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

    int rob(vector<int>& nums) {
        if(nums.size() == 0)
        {
            return 0;
        }
        if(nums.size() == 1)
        {
            return nums[0];
        }
        if(nums.size() == 2)
        {
            return max(nums[0], nums[1]);
        }

        vector<int> f {nums.begin(), nums.end() - 1};
        vector<int> s {nums.begin() + 1, nums.end()};

        return max(rob_helper(f), rob_helper(s));
    }
};
// @lc code=end

