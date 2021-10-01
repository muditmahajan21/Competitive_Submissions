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
        ll i, j, k, n, p, x, y, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> p >> x >> y;
        p--;

        ll arr[n];
    
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i <= p; i++)
        {
            if(arr[i] == 1)
            {
                ans += y;
            }
            else
            {
                ans += x;
            }
        }

        cout << ans << endl;
    }

return 0;
}
