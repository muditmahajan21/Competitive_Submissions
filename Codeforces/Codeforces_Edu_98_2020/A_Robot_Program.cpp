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
        cin >> x >> y;

        if(x == y)
        {
            ans = 2 * x;
        }
        else  
        {
            ans = 2 * max(x, y) - 1;
        }

        cout << ans << endl;
    }

return 0;
}
