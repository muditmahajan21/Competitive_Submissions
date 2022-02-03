/*
This problem was recently asked by Google.

Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.

Bonus: Can you do this in one pass?
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n, k;
    cin >> n >> k; 
    vector<int> arr(n);
    map<int, int> mp;

    for(i = 0; i < n; i++) 
    {
        cin >> arr[i];
        mp[arr[i]]++;
    } 
    
    bool flag = false;
    for(auto e: mp)
    {
        if(mp.find(k - e.first) != mp.end()) 
        {
            cout << "Yes" << endl;
            flag = true;
            break;
        }
    }

    if(!flag) 
    {
        cout << "No" << endl;
    }
    return 0;
}