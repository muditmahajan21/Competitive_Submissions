/*
 * @lc app=leetcode id=746 lang=cpp
 *
 * [746] Min Cost Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> res (cost.size ());
        res[0] = cost[0];
        res[1] = cost[1];

        for(int i = 2; i < cost.size(); i++) 
        {
            res[i] = cost[i] + min(res[i - 1], res[i - 2]);
        }
        return min(res[cost.size() - 1], res[cost.size() - 2]);
    }
};
// @lc code=end

