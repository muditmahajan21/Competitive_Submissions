#include "bits/stdc++.h"
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
        cin >> n;
        ll arr[n];
        
        ll c[101];
        memset(c, 0, sizeof(c));

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i]]++;
        }

        for(i = 1; i <= 100; i++)
        {
            ans = max(ans, c[i]);
        }


        cout << ans << endl;
    }

return 0;
}
