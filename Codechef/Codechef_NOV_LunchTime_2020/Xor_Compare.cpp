#include<bits/stdc++.h>
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
        ll x, y, i, j, k, n, temp, count = 0, ans = 0;
        cin >> x >> y >> n;

        for(i = 0; i <= n; i++)
        {
            if((x ^ i) < (y ^ i))
            {
                ans++;
            }
        }
        cout << ans << endl;
        //cerr << (x | y) << endl;
    }

return 0;
}
