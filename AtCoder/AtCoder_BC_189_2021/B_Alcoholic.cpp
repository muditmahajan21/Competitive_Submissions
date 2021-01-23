#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    bool flag = false;
    cin >> n >> temp;
    
   vector<ll> v, p;

   for(i = 0; i < n; i++)
    {
        cin >> k >> j;
        v.push_back(k);
        p.push_back(j);
    }

    for(i = 0; i < n; i++)
    {
        k = v[i] * p[i];
        if(sum + k > (temp * 100))
        {
            cout << i + 1 << endl;
            flag = true;
            break;
        }
        sum += k;
    }

    if(!flag)
    {
        cout << -1 << endl;
    }
return 0;
}
