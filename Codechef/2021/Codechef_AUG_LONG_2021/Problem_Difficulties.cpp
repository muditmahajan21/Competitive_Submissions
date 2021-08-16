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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        map<ll, ll>mp;

        for(i = 0; i < 4; i++)
        {
            cin >> temp;
            mp[temp]++;
        }

        if(mp.size() == 1)
        {
            cout << 0 << endl;
        }
        else if(mp.size() == 2)
        {   
            ans = LONG_LONG_MAX;
            for(auto e: mp)
            {
                ans = min(ans, e.second);
            }
            cout << ans << endl;
        }
        else
        {
            cout << 2 << endl;
        }

    }

return 0;
}
