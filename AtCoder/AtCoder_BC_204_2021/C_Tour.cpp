#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;

    ll i, j, k, n, m, temp, count = 0, ans = 0, sum = 0;
    cin >> n >> m;

    vector<vector<ll>> graph(n);
    for(i = 0; i < m; i++)
    {
        cin >> j >> k;
        j--;k--;
        graph[j].push_back(k);
    }

    ans = 0;

    for(i = 0; i < n; i++)
    {
        queue<ll> q;
        vector<bool> visited(n);
        visited[i] = true;
        q.push(i);

        while(!q.empty())
        {
            temp = q.front();
            q.pop();
            ans++;

            for(auto itr: graph[temp])
            {
                if(!visited[itr])
                {
                    visited[itr] = true;
                    q.push(itr);
                }
            }
        }
    }

    cout << ans << endl;

return 0;
}
