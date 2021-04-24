#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j = 0, k = LONG_LONG_MAX, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    ll a[n], b[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
        j = max(j, a[i]);
    }

    for(i = 0; i < n; i++)
    {
        cin >> b[i];
        k = min(k, b[i]);
    }
    //cerr << j << " " << k << endl;
    if(k >= j)
    {
        ans = (k - j) + 1;
    }
    else if(k < j)
    {
        ans = 0;
    }
    cout << ans << endl;

return 0;
}
