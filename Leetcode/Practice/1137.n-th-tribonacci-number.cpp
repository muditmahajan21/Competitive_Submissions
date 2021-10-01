/*
 * @lc app=leetcode id=1137 lang=cpp
 *
 * [1137] N-th Tribonacci Number
 */

// @lc code=start
class Solution {
public:
    int tribonacci(int n) {
        if(n == 0 || n == 1)
        {
            return n;
        }
        else if(n == 2)
        {
            return 1;
        }
        else
        {
            int arr[n + 1];
            arr[0] = 0;
            arr[1] = 1;
            arr[2] = 1;

            for(int i = 3; i <= n; i++)
            {
                arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3]; 
            }
            return arr[n];
        }
    }
};
// @lc code=end

