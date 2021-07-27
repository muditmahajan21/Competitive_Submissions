/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
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
        for(int i = ind; i < n; i++)
        {   
            if(candidates[i] > target)
            {
                break;
            }
            if(i > ind and candidates[i] == candidates[i - 1])
            {
                continue;
            }
            ans.push_back(candidates[i]);
            combinations(res, ans, candidates, target - candidates[i], i + 1);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        sort(candidates.begin(), candidates.end());
        combinations(res, ans, candidates, target, 0);
        return res;
    }
};
// @lc code=end

