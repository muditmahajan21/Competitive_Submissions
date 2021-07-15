/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        int n = nums.size();
        for(auto e: nums)
        {
            if(e == 0)count0++;
            else if(e == 1)count1++;
            else count2++;
        }
        int i = 0, j = 0;
        
        while(i < count0){
            nums[i] = 0;
            i++;
            j++;
        }
        i = 0;
        while(i < count1  and j < n)
        {
            nums[j] = 1;
            i++;
            j++;
        }
        i = 0;
        while(i < count2 and j < n)
        {
            nums[j] = 2;
            i++;
            j++;
        }
    }
};
// @lc code=end

