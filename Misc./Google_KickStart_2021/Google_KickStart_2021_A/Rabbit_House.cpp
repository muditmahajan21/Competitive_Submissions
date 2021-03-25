#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
using namespace std;

ll arr[300][300];
ll r, c;

ll check(ll i, ll j)
{   
    if(i < 0 || j < 0 ||  i >= r || j >= c)
    {
        return 0;
    }

    ll a, b, ans = 0;

    a = i + 1;
    b = j;
    
    if(a >= 0 && b >= 0 && a < r && b < c)
    {
        if(arr[i][j] - arr[a][b] > 1)
        {
            ans += arr[i][j] - arr[a][b] - 1;
            arr[a][b] = arr[i][j] - 1;
            ans += check(a, b);
        }
    }

    a = i - 1;
    b = j;
    
    if(a >= 0 && b >= 0 && a < r && b < c)
    {
        if(arr[i][j] - arr[a][b] > 1)
        {
            ans += arr[i][j] - arr[a][b] - 1;
            arr[a][b] = arr[i][j] - 1;
            ans += check(a, b);
        }
    }

    a = i;
    b = j + 1;
    
    if(a >= 0 && b >= 0 && a < r && b < c)
    {   
        
        if(arr[i][j] - arr[a][b] > 1)
        {
            ans += arr[i][j] - arr[a][b] - 1;
            arr[a][b] = arr[i][j] - 1;
            ans += check(a, b);
        }
    }

    a = i;
    b = j - 1;

    if(a >= 0 && b >= 0 && a < r && b < c)
    {
        if(arr[i][j] - arr[a][b] > 1)
        {
            ans += arr[i][j] - arr[a][b] - 1;
            arr[a][b] = arr[i][j] - 1;
            ans += check(a, b);
        }
    }

    return ans;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 0;
       
        cin >> r >> c;

        //ll max_ele = LONG_LONG_MIN;

        for(i = 0; i < r; i++)
        {   
            for(j = 0; j < c; j++)
            {
                cin >> arr[i][j];
                //max_ele = max(max_ele, arr[i][j]);
            }
        }

        vector<pair<ll, ll>> to_operate;

        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {   
                if(arr[i][j] > 0)
                {
                    to_operate.push_back( {i, j} );
                }
            }
        }
        
        for(auto it = to_operate.begin(); it != to_operate.end(); it++)
        {   
            
            ans += check(it -> first, it -> second);
        }
        
        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}