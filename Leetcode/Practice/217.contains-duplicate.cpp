/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s {nums.begin(), nums.end()};
        return (nums.size() != s.size());
    }
};
// @lc code=end

