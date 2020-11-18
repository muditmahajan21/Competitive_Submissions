/*
 * @lc app=leetcode id=1299 lang=cpp
 *
 * [1299] Replace Elements with Greatest Element on Right Side
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int max;
        for(int i = 0; i < arr.size() - 1; i ++)
        {   
            max = arr[i + 1];
            for(int j = i + 1; j < arr.size(); j++)
            {
                if(arr[j] > max)
                {
                    max = arr[j];
                }
            }
            arr[i] = max;
        }
        arr[arr.size() - 1] = -1;
        return arr;
    }
};
// @lc code=end

