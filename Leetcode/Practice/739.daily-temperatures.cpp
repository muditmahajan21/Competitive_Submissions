/*
 * @lc app=leetcode id=739 lang=cpp
 *
 * [739] Daily Temperatures
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> s;
        int i, n = T.size(), temp;
        vector<int> res(n);

        s.push(n - 1);

        for(i = n - 2; i >= 0; i--)
        {
            temp = T[i];
            while(!s.empty() && temp >= T[s.top()])
                s.pop();
            if(!s.empty())
                res[i] = s.top() - i;
            s.push(i);
        }
        return res;
    }
};
// @lc code=end

