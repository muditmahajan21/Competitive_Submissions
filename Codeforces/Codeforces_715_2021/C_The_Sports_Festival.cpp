#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
   
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    ll arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + n);
    ll dp[n][n];
    memset(dp, 0, sizeof(dp));

    for(i = 1; i < n; i++)
    {
        for(j = 0; j + i < n; j++)
        {
            dp[j][j + i] = arr[i + j] - arr[j] + min(dp[j + 1][i + j], dp[j][i + j - 1]);
        }
    }

    ans = dp[0][n - 1];
    cout << ans << endl;
    
return 0;
}