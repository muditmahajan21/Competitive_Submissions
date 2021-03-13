#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

ll ans(ll n)
{
        return ((n - 1) * (n + 4) * (n * n - 3 * n + 4)) / 2;
}

int main()
{
        ll n, i;
        cin >> n;
        for(i = 1; i <= n; i++)
        {
                cout << ans(i) << endl;
        }
return 0;
}
