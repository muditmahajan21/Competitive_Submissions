#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;

ll power(ll a, ll b)
{
        ll x, y;
        x = a % MOD;
        y = b % (MOD - 1);

        ll res = 1;
        while(y)
        {   
                if(y & 1)
                {
                        res = res * x % MOD;
                }
                y = y / 2;
                x = x * x % MOD;
        }
        return res;
}

int main()
{
        ll ans, n;
        cin >> n;
        ans = power(2, n);
        cout << ans << endl;
return 0;
}
