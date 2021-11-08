#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
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
        ll x;
        cin >> x >> k;
        k = x * k;
        sum = x * 2;
        ans = k * (k - 1);
        cout << sum << " " << ans << endl;
    }

return 0;
}
