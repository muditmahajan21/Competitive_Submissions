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
        ll p, a, b, c, x, y;
        cin >> p >> a >> b >> c >> x >> y;

        
        ll max_a = a * x + b;
        ll max_c = a * y + c;

        ans = p / min(max_a, max_c);
        cout << ans << endl;
    }

return 0;
}
