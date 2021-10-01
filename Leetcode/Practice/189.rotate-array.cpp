/*
 * @lc app=leetcode id=189 lang=cpp
 *
 * [189] Rotate Array
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> res (nums.size());
        for(int i = 0; i < nums.size(); i++)
        {
            res[(i + k) % nums.size()] = nums[i];
        }
        nums = res;
    }
};
// @lc code=end

