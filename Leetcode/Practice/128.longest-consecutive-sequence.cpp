/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> m;

        for(auto e: nums)
        {
            m[e]++;
        }

        int ans = 0;
        int curr = 0;
        int res = 0;

        for(auto e: m)
        {
            if(m.find(e.first - 1) == m.end())
            {
                curr = e.first;
                ans = 1;
            }
            else
            {   
                curr++;;
                ans++;
            }
            res = max(res, ans);
        }
        return res;
    }
};
// @lc code=end

