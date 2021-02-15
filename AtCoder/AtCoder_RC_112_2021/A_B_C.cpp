#include "bits/stdc++.h"
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
        ll l, r;
        cin >> l >> r;

        ans = r - 2 * l + 1;
        if (ans < 0)ans = 0;
        ans = ans * (ans + 1) / 2;

        cout << ans << endl;
    }

return 0;
}
