#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

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
        ll arr[n];
        map<ll, ll> c, freq;
        set<ll> val;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i]]++;
        }

        ans= 1e9;

       for(pair<ll, ll> t: c)
       {
           val.insert(t.second);
       }

       for(ll t: val)
       {
           temp = 0;
           for(pair<ll, ll> p: c)
           {
               if(p.second >= t)
               {
                   temp += p.second - t;
               }
               else
               {
                   temp += p.second;
               }
           }
           ans = min(ans, temp);
       }

       cout << ans << endl;
    }

return 0;
}
