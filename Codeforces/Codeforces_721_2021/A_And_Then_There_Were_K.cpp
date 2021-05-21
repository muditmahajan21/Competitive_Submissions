#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll highestPowerof2(ll n)
{
    // Invalid input
    if (n < 1)
        return 0;
 
    ll res = 1;
 
    // Try all powers starting from 2^1
    for (ll i=0; i<8*sizeof(ll); i++)
    {
        ll curr = 1 << i;
 
        // If current power is more than n, break
        if (curr > n)
           break;
 
        res = curr;
    }
 
    return res;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        
        temp = highestPowerof2(n);
        cout << temp - 1 << endl;
    }

return 0;
}
