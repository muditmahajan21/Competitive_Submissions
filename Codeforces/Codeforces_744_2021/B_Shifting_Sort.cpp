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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        vector<ll> arr(n), copy(n);
        
        vector<pair<ll, ll>> mp;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp.push_back( {arr[i], i} );
            copy[i] = arr[i];
        }

        sort(arr.begin(), arr.end());
        vector<vector<ll>> res;

        for(i = 0; i < n; i++)
        {
            if(copy[i] != arr[i])
            {   
                for(j = i + 1; j < n; j++)
                {   
                    if(copy[j] == arr[i])
                    {
                        temp = j;
                        break;
                    }
                }
                ll t = copy[temp];
                
                for(k = temp; k > i; k--)
                {
                    copy[k] = copy[k - 1];
                }
                copy[i] = t;
                
                res.push_back( {i + 1, temp + 1, temp - i} );
            }
        }

        cout << res.size() << endl;
        for(auto e: res)
        {
            for(auto f: e)
            {
                cout << f << " ";
            }
            cout << endl;
        }
        
    }

return 0;
}