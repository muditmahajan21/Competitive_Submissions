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
        ll m, x, y, x1, y1, x2, y2;
        cin >> n >> m >> x >> y;

        if(x >= n / 2 and y >= m / 2)
        {
            x1 = 1;
            y1 = m;
            x2 = n;
            y2 = 1;
        }
        else if(x <= n / 2 and y <= m / 2)
        {
            x1 = 1;
            y1 = m;
            x2 = n;
            y2 = 1;
        }
        else
        {
            x1 = n;
            y1 = m;
            x2 = 1;
            y2 = 1;
        }

        cout << x1 << " " << y1 << " " << x2 << " " << y2 << endl;
    }

return 0;
}
