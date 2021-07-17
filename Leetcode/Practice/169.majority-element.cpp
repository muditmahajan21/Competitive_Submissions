/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
 */

// @lc code=start

/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(auto e: nums)
        {
            m[e]++;
        }
        int ans;
        for(auto e: m)
        {
            if(e.second > nums.size() / 2)
            {
                ans = e.first;
                break;
            }
        }
        return ans;
    }
};
*/


/*
* Alternative Solution
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;
        int count = 0;

        for(auto e: nums)
        {
            if(count == 0)
            {
                ans = e;
                count++;
            }
            else
            {
                if(ans == e)
                {
                    count++;
                }
                else
                {
                    count--;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

