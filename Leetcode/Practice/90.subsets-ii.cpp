/*
 * @lc app=leetcode id=90 lang=cpp
 *
 * [90] Subsets II
 */

// @lc code=start
class Solution {
public:
    void subsets(vector<vector<int>> & res, vector<int> &ans, vector<int> &nums, int ind)
    {
        res.push_back(ans);
        int i, n = nums.size();
        for(i = ind; i < n; i++)
        {
            if(i > ind and nums[i] == nums[i - 1])
            {
                continue;
            }
            ans.push_back(nums[i]);
            subsets(res, ans, nums, i + 1);
            ans.pop_back();
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> ans;

        sort(nums.begin(), nums.end());

        subsets(res, ans, nums, 0);
        return res;
    }
};
// @lc code=end

