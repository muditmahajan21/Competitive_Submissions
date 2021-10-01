/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 */

// @lc code=start
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        
        int n = INT_MAX;
        for(int i = 0; i < strs.size(); i++) {
            if(strs[i].length() < n)
            {
                n = strs[i].length();
            }
        }   

        for(int i = 0; i < n; i++)
        {   
            bool flag = true;
            char c = strs[0][i];
            for(int j = 1; j < strs.size(); j++)
            {
                if(strs[j][i] != c)
                {
                    flag = false;
                    break;
                }
            }
            if(flag) res += c;
            else break;
        }
        return res;
    }
};
// @lc code=end

