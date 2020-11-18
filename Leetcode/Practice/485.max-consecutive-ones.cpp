/*
 * @lc app=leetcode id=485 lang=cpp
 *
 * [485] Max Consecutive Ones
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int temp = 0, i, n = nums.size(), prev = 0;


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
            if(temp > prev)
            {
                prev = temp;
            }
        }

        return prev;
    }
};
// @lc code=end

