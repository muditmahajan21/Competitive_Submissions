#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    
    ll i, j, k = 200, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    ll arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        arr[i] = (arr[i] + k) % k;
    }

    ll c[k];
    memset(c, 0, sizeof(c));
    for(i = 0; i < n; i++)
    {
        c[arr[i]]++;
    }

    for(i = 0; i < k; i++)
    {
        ans += (c[i] * (c[i] - 1)) / 2;
    }

    cout << ans << endl;

return 0;
}
