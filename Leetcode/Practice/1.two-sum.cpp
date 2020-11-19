/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int i,j, n = nums.size();

        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;        
    }
};
// @lc code=end

