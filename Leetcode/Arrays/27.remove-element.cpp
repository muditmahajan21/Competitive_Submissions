/*
 * @lc app=leetcode id=27 lang=cpp
 *
 * [27] Remove Element
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i, count = 0, n = nums.size();
        for(i = 0; i < n; i++)
        {
            if(nums[i] == val)
            {
                count++;
            }
            else  
            {
                nums[i - count] = nums[i];
            }
        }
        return (n - count);
    }
};
// @lc code=end

