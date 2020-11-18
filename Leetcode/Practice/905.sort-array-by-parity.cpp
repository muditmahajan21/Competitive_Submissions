/*
 * @lc app=leetcode id=905 lang=cpp
 *
 * [905] Sort Array By Parity
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> res, temp;
        for(int i = 0; i < A.size(); i++)
        {
            if(A[i] % 2 == 0)
            {
                res.push_back(A[i]);
            }
            else  
            {
                temp.push_back(A[i]);
            }
        }
        for(int i = 0; i < temp.size(); i++)
        {
            res.push_back(temp[i]);
        }
        return res;
    }
};
// @lc code=end

