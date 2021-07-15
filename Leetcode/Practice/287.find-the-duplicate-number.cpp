/*
 * @lc app=leetcode id=287 lang=cpp
 *
 * [287] Find the Duplicate Number
 */

// @lc code=start
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int> count_arr(n, 0);
        
        int ans = 0;
        for(auto e: nums)
        {
            if(count_arr[e - 1])
            {
                ans = e;
                break;
            }
            count_arr[e - 1]++;
        }
        return ans;
    }
};
// @lc code=end

