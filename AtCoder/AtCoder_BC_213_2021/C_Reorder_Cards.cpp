#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    ll h, w;
    cin >> h >> w >> n;

    ll a[n];
    ll b[n];
    vector<pair<ll, ll>> mat_h;
    vector<pair<ll, ll>> mat_w;

    for(i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        mat_h.push_back( {a[i], i} );
        mat_w.push_back( {b[i], i} );
    }

    sort(mat_h.begin(), mat_h.end());
    sort(mat_w.begin(), mat_w.end());

    j = mat_h[0].first;
    k = mat_w[0].first;

    vector<pair<ll, ll>> res(n, {-1, -1});

    for(i = 0; i < n; i++)
    {   
        if(k != mat_w[i].first)
        {
            sum++;
            k = mat_w[i].first;
        }
        res[mat_w[i].second].second = sum + 1;

        if(j != mat_h[i].first)
        {   
            ans++;
            j = mat_h[i].first; 
        }
        res[mat_h[i].second].first = ans + 1;
    }

    for(auto e: res)
    {
        cout << e.first << " " << e.second << endl;
    }

return 0;
}
