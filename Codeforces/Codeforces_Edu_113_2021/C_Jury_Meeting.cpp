#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
const ll MOD = 998244353;

vector<ll> factorial(200001);

ll nCr(ll n, ll r)
{
    return factorial[n] / (factorial[r] * factorial[n - r]);
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    factorial[0] = 1LL;

    for(ll it = 1; it <= 200000; it++)
    {
        factorial[it] = factorial[it - 1] * it;
    }

    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, ans = 0, sum = 0;
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        j = arr[n - 1];
        k = arr[n - 2];

        if(j - k > 1)
        {
            ans = 0;
        }
        else if(j == k)
        {
            ans = factorial[n] % MOD;
        }
        else
        {
            ans = factorial[n] % MOD;
            temp = count(arr, arr + n, k);
            temp = n - temp - 1;

            for(i = 0; i <= temp; i++)
            {
                ans -= ((factorial[n - i - 1] % MOD) * (nCr(temp, i) % MOD) * (factorial[i] % MOD)) % MOD;
            }
        }

        cout << ans << endl;
    }

return 0;
}
