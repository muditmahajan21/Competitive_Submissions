#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

ll LCSubStr(string X, string Y, ll m, ll n)
{
    ll LCSuff[m + 1][n + 1];
    ll result = 0;

    for (ll i = 0; i <= m; i++)
    {
        for (ll j = 0; j <= n; j++)
        {
            if (i == 0 || j == 0)
                LCSuff[i][j] = 0;

            else if (X[i - 1] == Y[j - 1])
            {
                LCSuff[i][j] = LCSuff[i - 1][j - 1] + 1;
                result = max(result, LCSuff[i][j]);
            }
            else
                LCSuff[i][j] = 0;
        }
    }
    return result;
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        string a, b;
        cin >> a >> b;
        ll m = a.length(), n = b.length();
        ll ans = LCSubStr(a, b, m, n);
        cout << m + n - 2 * ans << endl;
    }
    return 0;
}
