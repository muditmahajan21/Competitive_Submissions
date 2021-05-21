#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
const ll upper_limit = 1e6 + 1;
 
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, x, n;
    cin >> n >> x;
    ll arr[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll ans[upper_limit];
    for(i = 0; i < upper_limit; i++)
    {
        ans[i] = upper_limit;
    }
    ans[0] = 0;
 
    for(i = 1; i <= x; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(arr[j] <= i)
            {
                ans[i] = min(ans[i], ans[i - arr[j]] + 1);
            }
        }
    }
 
    if(ans[x] != upper_limit)
    {
        cout << ans[x] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
return 0;
}