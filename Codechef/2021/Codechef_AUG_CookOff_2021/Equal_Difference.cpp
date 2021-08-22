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
        cin >> n;
        ll arr[n];
        
        map<ll, ll> mp;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        for(auto e: mp)
        {
            ans = max(ans, e.second);
        }

        if(n == 1 || n == 2)
        {
            ans = 0;
        }
        else
        {
            if(ans == 1)
            {
                ans = n - 2;
            }
            else
            {
                ans = n - ans;
            }
        }

        cout << ans << endl;
    }

return 0;
}
