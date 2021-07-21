/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        int temp, i, n = nums.size();
        int l, r, target = 0;

        for(i = 0; i < n; i++)
        {
            if(i and nums[i] == nums[i - 1])
            {
                continue;
            }
            else
            {
                l = i + 1;
                r = n - 1;
                while(l < r)
                {
                    temp = nums[i] + nums[l] + nums[r];
                    if(temp < target)
                    {
                        l++;
                    }
                    else if(temp > target)
                    {
                        r--;
                    }
                    else
                    {
                        res.push_back( {nums[i], nums[l], nums[r]} );

                        while(l < r and nums[l] == nums[l + 1])
                        {
                            l++;
                        }
                        while(l < r and nums[r] == nums[r - 1])
                        {
                            r--;
                        }
                        l++;r--;
                    }
                }
            }
        }
        return res;
    }
};
// @lc code=end

