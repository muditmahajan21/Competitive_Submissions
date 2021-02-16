#include "bits/stdc++.h"
#define ll unsigned long long int
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
        vector<pair<ll, ll>> players;
        
        for(i = 0; i < n; i++)
        {
            cin >> temp;
            players.push_back( {temp, i + 1} );
        }

        sort(players.begin(), players.end());
        
        vector<ll> prefix_sum(n + 1, 0);

        for(i = 0; i < n; i++)
        {
            prefix_sum[i + 1] = prefix_sum[i] + players[i].first;
        }

        vector<ll> possible = {players.back().second};
        ll index = n - 1;

        while(index > 0 and prefix_sum[index] >= players[index].first)
        {
            index--;
            possible.push_back(players[index].second);
        }

        sort(possible.begin(), possible.end());

        cout << possible.size() << endl;
        for(i = 0; i < possible.size(); i++)
        {
            cout << possible[i]<< " ";
        }
        cout << endl;

    }

return 0;
}
