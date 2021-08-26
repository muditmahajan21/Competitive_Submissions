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
        ll l, r;
        cin >> l >> r;

        j = r / 2;
        j++;
        j = max(j, l);
        j = min(j, r);
        ans = r % j;

        cout << ans << endl;
    }   

return 0;
}
