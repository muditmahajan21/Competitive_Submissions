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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0, total;
        ll x, r, m;
        cin >> x >> r >> m;

        sum = 60 * r;
        if(x >= sum and r <= m)
        {
            ans = 1;
        }
        else
        {
            total = 60 * m;
            temp = 2 * (sum - x) + x;
            if(temp <= total)
            {
                ans = 1;
            }
        }

        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
