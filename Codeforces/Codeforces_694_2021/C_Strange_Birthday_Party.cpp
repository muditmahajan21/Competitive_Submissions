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
    while(test--)
    {
        ll i, j, k, n, m, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> m;
        ll ind[n], cost[m], temp_cost[m];
        
        for(i = 0; i < n; i++)
        {
            cin >> ind[i];
        }
        for(i = 0 ; i < m ; i++)
        {
            cin >> cost[i];
            temp_cost[i] = cost[i];
        }

        sort(ind, ind + n, greater<ll>());

        for(i = 0 ; i < n; i++)
        {
            j = cost[ind[i] - 1];
            k = temp_cost[count];

            if(k < j)
            {
                count++;
                ans += k;
            }
            else  
            {
                ans += j;
            }
        }

        cout << ans << endl;
    }

return 0;
}
