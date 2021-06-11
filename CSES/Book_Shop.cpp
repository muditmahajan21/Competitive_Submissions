#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    
    cin >> n >> k;
    int price[n], pages[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for(i = 0; i < n; i++)
    {
        cin >> pages[i];
    }
    
    int dp[n + 1][k + 1];

    for(i = 0; i <= n; i++)
    {
        for(j = 0; j <= k; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j] = 0;
            }
            else if(price[i - 1] <= j)
            {
                dp[i][j] = max(pages[i - 1] + dp[i - 1][j - price[i - 1]], dp[i - 1][j]);
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    
    ans = dp[n][k];

    cout << ans << endl;

return 0;
}
