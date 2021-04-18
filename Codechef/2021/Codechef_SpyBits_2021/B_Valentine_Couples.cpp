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
        ll b[n], g[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> g[i];
        }

        sort(b, b + n, greater<ll>());
        sort(g, g + n);

        ans = LONG_LONG_MIN;

        for(i = 0; i < n; i++)
        {
            ans = max(ans, (b[i] + g[i]));
        }
        cout << ans << endl;
    }

return 0;
}
