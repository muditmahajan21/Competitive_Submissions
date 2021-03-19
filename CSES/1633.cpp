#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;

ll dp[1000001];

ll find_ways(ll n)
{      
    ll sum = 0, j, i;   
    dp[0] = 1;
    for(i = 1; i <= n; i++)
    { 
        sum = 0;
        j = 1;

        while(i >= j && j <= 6)
        {
            sum += dp[i - j];
            j++;
        }

        dp[i] = sum % MOD;
    }
    return dp[n];
    /*
    if(x < 1)
    {
        return 0;
    }
    if(x == 1)
    {
        if(x <= m)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    ll i, ans = 0;

    for(i = 1; i <= m; i++)
    {
        ans += find_ways(m, n - 1, x - i);
    }
    return ans;
    */
}

int main()
{
    ll n;
    cin >> n;

    ll ans = find_ways(n);
    cout << ans << endl;

return 0;
}