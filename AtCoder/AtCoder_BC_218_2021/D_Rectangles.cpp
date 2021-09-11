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
    cin >> n;
    set<pair<ll, ll>> arr;
    pair<ll, ll> t1, t2;

    for(i = 0; i < n; i++)
    {
        cin >> j >> k;
        arr.insert( {j, k} );
    }

    vector<pair<ll, ll>> points {arr.begin(), arr.end()};

    for(i = 0; i < points.size() - 1; i++)
    {
        for(j = i + 1; j < points.size(); j++)
        {
            if(points[i].first != points[j].first and points[i].second != points[j].second)
            {
                t1 = {points[i].first, points[j].second};
                t2 = {points[j].first, points[i].second};

                if(find(points.begin(), points.end(), t1) != points.end() and find(points.begin(), points.end(), t2) != points.end())
                {
                    ans++;
                }
            }
        }
    }

    ans /= 2;
    cout << ans << endl;

return 0;
}
