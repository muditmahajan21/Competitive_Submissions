#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while(t--) {
        ll a[3], x;
        cin >> x;
        for(int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        sort(a, a + 3);
        ll ans = 0;
        ans += (x - 1) * a[0];
        ans += a[1];
        cout << ans << "\n";
    }
return 0;
}
