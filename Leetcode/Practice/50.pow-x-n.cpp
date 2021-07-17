/*
 * @lc app=leetcode id=50 lang=cpp
 *
 * [50] Pow(x, n)
 */

// @lc code=start

class Solution {
public:
    double myPow(double x, int n) {
        return double(pow(x, n));
    }
};
/*
* Alternative Solution
*/

class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0)
        {
            x = 1 / x;
        }

        long num = abs(n);
        double ans = 1;

        while(num > 0)
        {
            if(num % 2)
            {
                ans *= x;
            }
            x *= x;
            num /= 2;
        }
        return ans;
    }
};
// @lc code=end

