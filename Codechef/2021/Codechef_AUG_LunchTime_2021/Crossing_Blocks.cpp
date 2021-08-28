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
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll prefix[n];
        
        prefix[n - 1] = arr[n - 1];

        for(i = n - 2; i >= 0; i--)
        {
            prefix[i] = max(prefix[i + 1], arr[i]);
        }

        set<ll> s {prefix, prefix + n};
        if(prefix[0] != arr[0])
        {
            ans = -1;
        }
        else
        {
            ans = s.size() - 1;
            if(n > 1 and prefix[0] == prefix[1])
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

return 0;
}
