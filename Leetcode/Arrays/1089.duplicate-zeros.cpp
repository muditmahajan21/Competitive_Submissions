/*
 * @lc app=leetcode id=1089 lang=cpp
 *
 * [1089] Duplicate Zeros
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int i, n = arr.size(), j;
        for(i = 0; i < n ; i++)
        {
            if(arr[i] == 0)
            {
                for(j = n - 1; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }
                i++;
            }
        }        
    }
};
// @lc code=end

