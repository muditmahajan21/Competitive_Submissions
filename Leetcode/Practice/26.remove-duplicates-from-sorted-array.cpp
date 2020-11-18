/*
 * @lc app=leetcode id=26 lang=cpp
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0, i, n = nums.size();
        for(i = 0; i < n; i++)
        {
            if( !i || nums[i] != nums[count - 1])
            {
                nums[count++] = nums[i];
            }
        }
        return count;
    }
};
// @lc code=end

