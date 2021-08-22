/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
 */

// @lc code=start
class Solution {
public:
    void all_perm(vector<vector<int>> &res, vector<int> &nums, int ind)
    {
        if(ind == nums.size())
        {
            res.push_back(nums);
            return;
        }
        for(int i = ind; i < nums.size(); i++)
        {
            swap(nums[i], nums[ind]);
            all_perm(res, nums, ind + 1);
            swap(nums[ind], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        all_perm(res, nums, 0);
        return res;
    }
};
// @lc code=end

