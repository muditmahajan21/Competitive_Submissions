/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i, j;
        vector<int> c(3, 0);

        for(i = 0; i < nums.size(); i++)
        {
            c[nums[i]]++;
        }

        nums.clear();
        for(i = 0; i < 3; i++)
        {
            for(j = 0; j < c[i]; j++)
            {
                nums.push_back(i);
            }
        }
    }
};
// @lc code=end

