/*
 * @lc app=leetcode id=131 lang=cpp
 *
 * [131] Palindrome Partitioning
 */

// @lc code=start
class Solution {
public:

    bool is_palin(string &s, int start, int end)
    {
        while(start <= end)
        {
            if(s[start] != s[end])
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void sub_palin(vector<vector<string>> &res, vector<string> &ans, string &s, int ind)
    {   
        int n = s.size();
        if(ind == n)
        {   
            res.push_back(ans);
            return;
        }

        for(int i = ind; i < n; i++)
        {
            if(is_palin(s, ind, i))
            {
                ans.push_back(s.substr(ind, i - ind + 1));
                sub_palin(res, ans, s, i + 1);
                ans.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> ans;
        sub_palin(res, ans, s, 0);
        return res;
    }
};
// @lc code=end

