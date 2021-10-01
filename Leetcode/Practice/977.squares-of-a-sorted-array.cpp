/*
 * @lc app=leetcode id=977 lang=cpp
 *
 * [977] Squares of a Sorted Array
 */

// @lc code=start
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) 
        {
            if(nums[i] >= 0)
            {
                break;
            }
            else
            {
                nums[i] *= -1;
            }
        }
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++)
        {
            nums[i] = nums[i] * nums[i];
        }
        return nums;
    }
};
// @lc code=end

