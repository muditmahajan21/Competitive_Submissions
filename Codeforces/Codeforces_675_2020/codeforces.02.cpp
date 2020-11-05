#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

ll abs(ll a, ll b)
{
    ll diff = a - b;
    if(diff < 0)
    {
        diff = diff * (-1);
    }
    return diff;
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll optimal, i, j, n, m, sum = 0, ans = 0;
        cin >> n >> m;
        ll arr[n][m];

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                sum += arr[i][j];
            }
        }

        optimal = sum / (n * m);
        float opt = (float)(sum) / (float)(n * m);

        if(opt - (float)(optimal) < 0.50)
        {
            optimal = optimal;
        }
        else 
        {
            ++optimal;
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                ans += abs(optimal, arr[i][j]);
            }
        }

        cout << ans << endl;
    }
    return 0;
}