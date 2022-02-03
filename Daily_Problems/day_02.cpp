/*
Given an array of integers, return a new array such that each element at index i of the new array 

is the product of all the numbers in the original array except the one at i.

For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24]. 

If our input was [3, 2, 1], the expected output would be [2, 3, 6].

Follow-up: what if you can't use division?
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k;
    cin >> n;
    vector<int> arr(n), ans(n);
    vector<int> prefix(n), suffix(n);

    for(i = 0; i < n; i++) 
    {
        cin >> arr[i];
    } 
    
    for(i = 0 ; i < n; i++)
    {
        if(i == 0) 
        {
            prefix[i] = arr[i];
        }
        else 
        {
            prefix[i] = prefix[i - 1] * arr[i];
        }
    }

    for(i = n - 1 ; i >= 0 ; i--)
    {
        if(i == n - 1)
        {
            suffix[i] = arr[i];
        }
        else
        {
            suffix[i] = suffix[i + 1] * arr[i];
        }
    }

    for(i = 0; i < n; i++)
    {
        if(i == 0)
        {
            ans[i] = suffix[i];
        }
        else if(i == n - 1)
        {
            ans[i] = prefix[i - 1];
        }
        else
        {
            ans[i] = prefix[i - 1] * suffix[i + 1];
        }
    }

    for(auto e: ans)
    {
        cout << e << " ";
    }
    cout << "\n";

    return 0;
}