/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stck;
        int i, n = s.size();
        char x;

        for(i = 0; i < n; i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                stck.push(s[i]);
            }
            else  
            {
                if(stck.empty())
                {
                    return false;
                }
                else  
                {
                    x = stck.top();
                    stck.pop();
                    if(x == '(' && (s[i] == ']' || s[i] == '}'))
                    {
                        return false;
                    }
                    else if(x == '[' && (s[i] == ')' || s[i] == '}'))
                    {
                        return false;
                    }
                    else if(x == '{' && (s[i] == ')' || s[i] == ']'))
                    {
                        return false;
                    }
                }              
            }
        }

        if(stck.empty())
        {
            return true;
        }
        else   
        {
            return false;
        }
    }
};
// @lc code=end

