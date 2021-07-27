/*
 * @lc app=leetcode id=60 lang=cpp
 *
 * [60] Permutation Sequence
 */

// @lc code=start
class Solution {
public:
    string getPermutation(int n, int k) {
        string ans = "";
        string num = "";
        vector<int> fact(n + 1);
        fact[0] = 1;

        for(int i=0; i < n; i++)
        {
            num += to_string(i + 1);
            fact[i + 1] = fact[i] * (i + 1);
        }

        k -= 1;

        for(int i = n - 1; i >= 0; i--)
        {
            int ind = k / fact[i];
            k %= fact[i];
            ans += num[ind];
            num.erase(num.begin() + ind);
        }
        return ans;
    }
};
// @lc code=end

