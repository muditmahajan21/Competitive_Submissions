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
        ll arr[n];
        priority_queue<pair<ll, ll>> ind;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] > 0)
            ind.emplace(arr[i], i + 1);
        }

        vector<pair<ll, ll>> res;

        if(ind.size() <= 1)
        {
            cout << 0 << endl;
        }
        else
        {
            while(ind.size() > 1)
            {
                auto e = ind.top();
                ind.pop();
                
                auto f = ind.top();
                ind.pop();
                ll j = e.first;
                ll k = f.first;
                
                res.push_back( {e.second, f.second} );
                j--;
                k--;

                if(j)
                {
                    ind.push( {j, e.second} );
                }
                if(k)
                {
                    ind.push( {k, f.second} );
                }
            }

            cout << res.size() << endl;
            for(auto e: res)
            {
                cout << e.first << " " << e.second << endl;
            }
        }
    }

return 0;
}
