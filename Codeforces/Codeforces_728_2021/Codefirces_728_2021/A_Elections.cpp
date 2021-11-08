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
        cin >> i >> j >> k;

        ll a = (max(j , k) - i + 1);
        a = max(0LL, a);
        ll b = (max(i , k) - j + 1);
        b = max(0LL, b);
        ll c = (max(i , j) - k + 1);
        c = max(0LL, c);

        cout << a << " " << b << " " << c << endl;
    }

return 0;
}
