#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll n, x, i, j, k, sum = 0;
    bool flag = false;
    cin >> n >> x;
    x *= 100;

    for(i = 0; i < n; i++) 
    {
        cin >> j >> k;
        sum += j * k; 
        if(sum > x) 
        {
            cout << i + 1 << endl;
            flag = true;
            break;
        }
    }

    if(!(flag)) 
    {
            cout << -1 << endl;     
    }
return 0;
}
