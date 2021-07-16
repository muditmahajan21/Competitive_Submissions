/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i, n = nums.size();

        if(n == 1)
        {
            return;
        }
        i = n - 2;
        while(i >= 0 and nums[i + 1] <= nums[i])
        {
            i--;
        }

        if(i < 0)
        {
            sort(nums.begin(), nums.end());
            return ;
        }
        int j = n - 1;
        
        while(j >= 0 and nums[i] >= nums[j])
        {
            j--;
        }
        
        swap(nums[i], nums[j]);
        reverse(nums.begin() + i + 1,nums.end());
    }
};
// @lc code=end

