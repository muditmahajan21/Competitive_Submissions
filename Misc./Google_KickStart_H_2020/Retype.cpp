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
    for(ll t = 0; t < test; t++)
    {
        ll s, i, j, k, n, temp1, temp2, count = 0, ans = 0;
        cin >> n >> k >> s;
        
        temp1 = k + n;
        temp2 = (k - 1) + (k - s) + (n + 1 - s);

        ans = min(temp1, temp2);

        cout << "Case #" << t + 1 << ": " << ans << endl;
    }

return 0;
}