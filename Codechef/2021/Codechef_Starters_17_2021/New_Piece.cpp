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
        ll a, b, p, q;
        cin >> a >> b >> p >> q;

        i = a + b;
        j = p + q;

        if(i % 2 == j % 2) 
        {
            ans = 2;
        }
        else
        {
            ans = 1;
        }
        if(a == p and b == q)
        {
            ans = 0;
        }
        cout << ans << endl;
    }

return 0;
}
