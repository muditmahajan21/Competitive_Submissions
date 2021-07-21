/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0, i, n = nums.size(), ans = 0;


        for(i = 0; i < n; i++)
        {
            if(nums[i] == 1)    
            {
                temp++;
            }
            else if(nums[i] == 0)
            {
                temp = 0;
            }
            ans = max(ans, temp);
        }

        return ans;
    }
};
// @lc code=end

