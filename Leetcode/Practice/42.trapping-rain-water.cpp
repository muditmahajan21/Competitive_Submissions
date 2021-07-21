/*
 * @lc app=leetcode id=42 lang=cpp
 *
 * [42] Trapping Rain Water
 */

// @lc code=start
class Solution {
public:
    int trap(vector<int>& height) {
        int i, j, temp, ans = 0;
        int n = height.size();
        
        vector<int>left(n, 0);
        vector<int>right(n, 0);
        
        temp = 0;
        for(i = 0 ; i < n ; i++)
        {
            temp = max(temp, height[i]);
            left[i] = temp;
        }

        temp = 0;

        for(i = n - 1; i >= 0; i--)
        {
            temp = max(temp, height[i]);
            right[i] = temp;
        }
        
        for(i = 0;i < n; i++)
        {   
            temp = min(left[i], right[i]);
            ans += temp - height[i];
        }
        return ans;
    }
};
// @lc code=end

