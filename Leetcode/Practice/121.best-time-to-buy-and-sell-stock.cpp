/*
 * @lc app=leetcode id=121 lang=cpp
 *
 * [121] Best Time to Buy and Sell Stock
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i, n = prices.size();

        int ans = INT_MIN;
        int min_price = INT_MAX;

        for(i = 0; i < n; i++)
        {
            min_price = min(min_price, prices[i]);
            ans = max(ans, prices[i] - min_price);
        }
        return ans;
    }
};
// @lc code=end

