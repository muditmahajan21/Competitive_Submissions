/*
 * @lc app=leetcode id=1518 lang=cpp
 *
 * [1518] Water Bottles
 */

// @lc code=start
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans = numBottles;
        int temp = numBottles;
        while(temp > 0)
        {
            ans += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles % numExchange;
            temp = temp / numExchange;
        }
        return ans;
    }
};
// @lc code=end

