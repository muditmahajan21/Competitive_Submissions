#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

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
        sort(arr, arr + n, greater<ll>());
        vector<ll> diff(n - 1);
        
        for(i = 1; i < n; i++)
        {
            diff[i - 1] = abs(arr[i] - arr[i - 1]);
        }

        for(auto e: diff)
        {
            ans = gcd(ans, e);
        }
        if(ans == 0)
        {
            ans = -1;
        }
        cout << ans << endl;
    }

return 0;
}
