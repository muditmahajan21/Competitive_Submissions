#include <bits/stdc++.h>
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
        ll i, j, k, n, w, wr, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> w >> wr;
        ll arr[n];
        vector<ll> c;
        map<ll, ll> m;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }

        ans = wr;

        for(auto itr = m.begin(); itr != m.end(); itr++)
        {
            if(itr->second % 2 == 0)
            {
                ans += itr->first * itr->second;
            }
            else
            {
                ans += itr->first * (itr->second - 1);
                c.push_back(itr->first);
            }
        }

        
        if(ans >= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
