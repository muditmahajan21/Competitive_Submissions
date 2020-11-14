#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size(), i, temp, j, index;
        vector<int> res;
        if(k == 0)
        {
            for(i = 0; i < n; i++)
            {
                temp = 0;
                res.push_back(temp);
            }
        }
        else if(k > 0)
        {
            for(i = 0; i < n; i++)
            {   
                temp = 0;
                for(j = 1; j <= k; j++)
                {
                    index = i + j;
                    
                    if(i + j > n)
                    {
                        index = i + j - n;
                    }
                    temp += code[index];
                    res.push_back(temp);
                }
            }
        }
        else if(k < 0)
        {
            for(i = 0; i < n; i++)
            {
                temp = 0;
                for(j = -1; j >= k; j--)
                {
                    index = i + j;

                    if(i + j < 0)
                    {
                        index = i + j - n;
                    }
                    temp += code[index];
                    res.push_back(temp);
                }
            }
        }
        return res;
    }
};