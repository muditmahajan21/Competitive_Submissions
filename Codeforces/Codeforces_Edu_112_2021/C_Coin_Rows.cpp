#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll MaximumPath(vector<vector<ll> >& grid)
{
    
    ll N = grid.size();
    ll M = grid[0].size();
 
    vector<vector<ll> > sum;
    sum.resize(N + 1, vector<ll>(M + 1));
    
    for (ll i = 1; i <= N; i++) {
        for (ll j = 1; j <= M; j++) {
            sum[i][j] = max(sum[i - 1][j], sum[i][j - 1]) + grid[i - 1][j - 1];
        }
    }
    
    return sum[N][M];
}

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
        ll m = 2;
        vector<vector<ll>> arr(m, vector<ll>(n));
        
        for(j = 0; j < m; j++)
        {
            for(i = 0; i < n; i++)
            {
                cin >> arr[j][i];
            }
        }

        ll pref1[n];
        ll pref2[n];
        pref1[0] = arr[0][0];
        pref2[0] = arr[1][0];

        for(i = 1 ; i < n; i++)
        {
            pref1[i] = pref1[i - 1] + arr[0][i];
            pref2[i] = pref2[i - 1] + arr[1][i];
        }

        k = n - 1;
        for(i = 1; i < n; i++)
        {   
            if(pref1[n - 1] - pref1[i - 1] < pref2[i - 1])
            {
                k = i - 1;
                break;
            }
        }

        for(i = 0; i <= k; i++)
        {
            arr[0][i] = 0;
        }
        for(i = k; i < n; i++)
        {
            arr[1][i] = 0;
        }

        ans = MaximumPath(arr);
        cout << ans << endl;
    }

return 0;
}


