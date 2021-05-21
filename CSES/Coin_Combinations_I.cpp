#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
const ll upper_limit = 1e6 + 1;
const ll MOD = 1e9 + 7;
 
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, x, n;
    cin >> n >> x;
    ll arr[n];
    ll ans[1000001];
    for(i = 0; i <= 1000000; i++)
    {   
        ans[i] = 0;
    }
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        ans[arr[i]] = 1;
    }

    for(i = 1; i <= x; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i - arr[j] >= 0)
            {
                ans[i] = (ans[i] + ans[i - arr[j]]) % MOD;
            }
        }
    }
    cout << ans[x] << endl;
return 0;
}