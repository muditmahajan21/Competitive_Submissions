#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    ll s[n], t[n];

    for(i = 0; i < n; i++)
    {
        cin >> s[i];
    }

    for(i = 0; i < n; i++)
    {
        cin >> t[i];
    }

    ll res[n];
    res[0] = t[0];

    for(i = 1; i < n; i++)
    {
        res[i] = (min(s[i - 1] + res[i - 1], t[i]));
    }

    res[0] = min(res[n - 1] + s[n - 1], t[0]);

    cout << res[0] << endl;

    for(i = 1; i < n; i++)
    {
        res[i] = (min(s[i - 1] + res[i - 1], t[i]));
        cout << res[i] << endl;
    }ex

return 0;
}
