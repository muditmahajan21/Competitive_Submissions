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
        n = 4;
        ll a, b;
        cin >> a >> b;

        ans = (a + b) / 4;
        temp = min(a, b);
        ans = min(ans, temp);
        
        cout << ans << endl;
    }

return 0;
}
