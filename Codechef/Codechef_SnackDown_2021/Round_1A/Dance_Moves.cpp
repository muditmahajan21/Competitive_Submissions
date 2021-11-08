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
        ll x, y;
        cin >> x >> y;
        if(x > y) 
        {
            ans = (x - y);
        }
        else if(x == y) 
        {
            ans = 0;
        }
        else
        {
            temp = (y - x);
            if(temp % 2)
            {
                ans = (temp + 2) / 2 + 1;
            }
            else 
            {
                ans = temp / 2;
            }
        }
        cout << ans << endl;
    }

return 0;
}
