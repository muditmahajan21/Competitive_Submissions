/*
 * @lc app=leetcode id=283 lang=cpp
 *
 * [283] Move Zeroes
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] != 0)
            {
                nums[j] = nums[i];
                j++;
            }
        }
        for(j;j < nums.size(); j++)
        {
            nums[j] = 0;
        }
    }
};
// @lc code=end

