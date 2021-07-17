/*
 * @lc app=leetcode id=229 lang=cpp
 *
 * [229] Majority Element II
 */

// @lc code=start

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int, int> m;
        for(auto e: nums)
        {
            m[e]++;
        }
        vector<int> ans;
        for(auto e: m)
        {
            if(e.second > nums.size() / 3)
            {
                ans.push_back(e.first);
            }
        }
        return ans;
    }
};

/*
* Alternative Solution
*/

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int i, j, k, n = nums.size();
        j = -1;k = -1;

        vector<int> ans;
        int c0 = 0;
        int c1 = 0;

        for(auto e: nums)
        {
            if(j == e)
            {
                c0++;
            }
            else if(k == e)
            {
                c1++;
            }
            else if(c0 == 0)
            {
                j = e;
                c0++;
            }
            else if(c1 == 0)
            {
                k = e; 
                c1++; 
            }
            else
            {
                c0--;
                c1--;
            }
        }

        c0 = 0;
        c1 = 0;

        for(auto e: nums)
        {
            if(e == j)
            {
                c0++;
            }
            else if(e == k)
            {
                c1++;
            }
        }

        if(c0 > n / 3)
        {
            ans.push_back(j);
        }
        if(c1 > n / 3)
        {
            ans.push_back(k);
        }
        return ans;
    }
};
// @lc code=end

