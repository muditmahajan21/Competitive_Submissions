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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        ll x, y;
        cin >> x >> y;
        if(x > y)
        {
            swap(x, y);
        }

        if(__gcd(x, y) > 1)
        {
            ans = 0;
        }
        else if(__gcd(x + 1, y) > 1 || __gcd(x, y + 1) > 1)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }
        cout << ans << endl;
    }

return 0;
}
