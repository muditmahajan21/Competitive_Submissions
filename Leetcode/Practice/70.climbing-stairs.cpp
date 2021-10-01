/*
 * @lc app=leetcode id=70 lang=cpp
 *
 * [70] Climbing Stairs
 */

// @lc code=start
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2)
        {
            return n;
        }
        else
        {
            int arr[n + 1];
            arr[0] = 0;
            arr[1] = 1;
            arr[2] = 2;

            for(int i = 3; i <= n; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2]; 
            }
            return arr[n];
        }
    }
};
// @lc code=end

