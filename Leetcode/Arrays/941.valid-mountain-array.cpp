/*
 * @lc app=leetcode id=941 lang=cpp
 *
 * [941] Valid Mountain Array
 */

// @lc code=start

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int count0 = 0, count1 = 0, j;
        if(arr.size() < 3)
        {
            return false;
        }
        for(int i = 0; i < arr.size() - 1; i++)
        {
            if(arr[i] == arr[i + 1])
            {
                return false;
            }
            else  
            {
                if (arr[i] < arr[i + 1])
                {   
                    count0++;
                }
                else if(arr[i] > arr[i + 1])
                {
                    j = i;
                    break;
                } 
            }
        }
        for(j; j < arr.size() - 1; j++)
        {   
            if(arr[j] < arr[j + 1])
            {
                return false;
            }
            
            else if(arr[j] == arr[j + 1])
            {
                return false;
            }
            else  
            {   
                //cout << arr[j] << " " << j << endl;
                count1++;
            }
        }
        if(count0 > 0 && count1 >> 0)
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

