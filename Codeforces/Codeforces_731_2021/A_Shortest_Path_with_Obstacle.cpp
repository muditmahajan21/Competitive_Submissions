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
        
        ll xa, xb, ya, yb, fa, fb;
        cin >> xa >> ya >> xb >> yb >> fa >> fb;
        ans = abs(xa - xb) + abs(ya - yb);
        
        ll minx, maxx, miny, maxy;
        minx = min(xa, xb);
        maxx = max(xa, xb);
        miny = min(ya, yb);
        maxy = max(ya, yb);

        if(fa == xa and fa == xb)
        {
            if(fb >= miny and fb <= maxy)
            {
                ans += 2;
            }
        }
        else if(fb == ya and fb == yb)
        {
            if(fa >= minx and fa <= maxx)
            {
                ans += 2;
            }
        }

        cout << ans << endl;
    }

return 0;
}
