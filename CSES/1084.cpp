#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll i, n, m, k;
        cin >> n >> m >> k;
        ll a[n], b[m];

        for(i = 0; i < n; i++)
        {
                cin >> a[i];
        }

        for(i = 0; i < m; i++)
        {
                cin >> b[i];
        }

        sort(a, a + n);
        sort(b, b + m);

        ll j = 0, ans = 0;
        i = 0;
        while(i < n and j < m)
        {
                if(a[i] < b[j] - k)
                {
                        i++;
                }
                else if(a[i] > b[j] + k)
                {
                        j++;
                }
                else 
                {
                        i++;
                        j++;
                        ans++;
                }
        }

        cout << ans << endl;

return 0;
}
