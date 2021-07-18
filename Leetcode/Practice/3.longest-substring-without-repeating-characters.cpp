/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;

        int j = -1;
        int i;
        int ans = 0;
        int n = s.size();
        
        for (i = 0; i < n; i++) 
        {
            if (mp.count(s[i]) != 0) 
            {
                j = max(j, mp[s[i]]);
            }

            mp[s[i]] = i;
            ans = max(ans, i - j);
        }
        
        return ans;
    }
};
// @lc code=end

