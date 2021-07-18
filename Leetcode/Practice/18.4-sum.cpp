/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> set_res;
        map<int, vector<pair<int, int>>> two_sum;
        vector<int> arr;

        arr = nums;

        int temp, i, j, n = nums.size();

        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                two_sum[nums[i] + nums[j]].push_back( {i, j} );
            }
        }

        for(auto [key, value] : two_sum)
        {
            temp = target - key;

            if(two_sum.find(temp) != two_sum.end())
            {
                for(auto [a, b] : two_sum[key])
                {
                    for(auto [c, d] : two_sum[temp])
                    {
                        if(a != c and b != c and a != d and b != d)
                        {
                            vector<int> to_del {arr[a], arr[b], arr[c], arr[d]};
                            sort(to_del.begin(), to_del.end());
                            set_res.insert(to_del);
                        }
                    }
                }
            }
        }

        vector<vector<int>> res (set_res.begin(), set_res.end());
        return res;
    }
};
// @lc code=end

