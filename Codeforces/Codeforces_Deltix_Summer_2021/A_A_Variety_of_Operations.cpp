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
        ll c, d;
        cin >> c>> d;

        temp = abs(d - c);
        if(temp % 2)
        {
            ans = -1;
        }
        else if(c == d and c != 0)
        {
            ans = 1;
        }
        else if(c == d and c == 0)
        {
            ans = 0;
        }
        else
        {
            ans = 2;
        }
        cout << ans << endl;
    }

return 0;
}
