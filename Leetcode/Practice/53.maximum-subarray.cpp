/*
 * @lc app=leetcode id=53 lang=cpp
 *
 * [53] Maximum Subarray
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN;
        int sum = 0;
        for(auto e: nums)
        {
            if(sum >= 0)
            {
                sum += e;
            }
            else 
            {
                sum = e;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};
// @lc code=end

