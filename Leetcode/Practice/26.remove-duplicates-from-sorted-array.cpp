/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n, j, i, ans = 0;
        n = nums.size();

        i = 0; j = 0;

       for(i = 0; i < n; i++)
       {
           while(i != n - 1 and nums[i] == nums[i + 1])
           {
               i++;
           }
           nums[j] = nums[i];
           j++;
       }
       return j;
    }
};
// @lc code=end

