#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, m, temp, count = 0, ans = 0;
    int bit;
    cin >> n >> m;
    
    ll a[m],b[m];
    for(i = 0; i < m; i++)
    {
        cin >> a[i] >> b[i];
    }

    cin >> k;
    ll c[k], d[k];
    for(i = 0; i < k; i++)
    {
        cin >> c[i] >> d[i];
    }

    for(bit = 0; bit < (1 << k); bit++)
    {
        vector<bool>dish(n,false);
        count = 0;
        for(int j = 0; j < k; j++)
        {
            if(bit & (1 << j))
            {
                dish[c[j]-1] = true;
            }
            else
            {
                dish[d[j]-1] = true;
            }
        }

        for(i = 0; i < m; i++)
        {
            if(dish[a[i] - 1] && dish[b[i] - 1])
            {
                count++;
            }
        }

        ans = max(ans, count);
    }
    cout << ans << endl;

return 0;
}


