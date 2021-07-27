/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    void combinations(vector<vector<int>> &res, vector<int> &ans, vector<int> &candidates, int target, int ind)
    {
        if(target == 0)
        {
            res.push_back(ans);
            return;
        }

        int n = candidates.size();
        if(ind == n || candidates[ind] > target)
        {
            return;
        }

        ans.push_back(candidates[ind]);
        combinations(res, ans, candidates, target - candidates[ind], ind);
        ans.pop_back();
        combinations(res, ans, candidates, target, ind + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        sort(candidates.begin(), candidates.end());
        combinations(res, ans, candidates, target, 0);
        return res;
    }
};
// @lc code=end

