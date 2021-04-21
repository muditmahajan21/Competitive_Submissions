#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
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
        cin >> n >> k;
        ans = 1;
        while(k--)
        {
            ans = ans * n;
            ans = ans % MOD;
        }
        cout << ans << endl;
    }

return 0;
}