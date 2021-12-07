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
        
        vector<ll> graph[n + 5];
        ll root = 0;
        vector<ll> parent(n + 5);

        for(i = 1; i <= n; i++)
        {
            cin >> parent[i];
            if(parent[i] == i)
            {
                root = i;
            }
            else
            {
                graph[parent[i]].push_back(i);
            }
        }

        vector<ll> required(n + 5);

        for(i = 1; i <= n; i++)
        {
            cin >> temp;
            required[temp] = i;
        }

        temp = 1;

        priority_queue<pair<ll, ll>> pq;
        pq.push( {-required[root], root} );

        ans = 1;
        bool flag = true;

        vector<ll> res(n + 5);
        vector<ll> depth(n + 5);

        while(!pq.empty()) 
        {
            pair<ll, ll> pll = pq.top();
            pq.pop();
            
            if(pll.first * (-1) != temp)
            {   
                flag = false;
                break;
            }

            temp++;
            for(auto g: graph[pll.second])
            {
                pq.push( {-required[g], g} );
            }   
            
            if(pll.second == root)
            {
                res[pll.second] = 0;
                depth[pll.second] = 0;
            }

            if(root == pll.second)
            {
                sum = 0;
            }
            else
            {
                sum = depth[parent[pll.second]];
            }
            
            if(pll.second == root) 
            {
                res[pll.second] = 0;
            }
            else
            {
                res[pll.second] = ans - sum + 1;
            }
            
            depth[pll.second] = sum;

            if(pll.second != root) depth[pll.second] += res[pll.second];
            ans = depth[pll.second];
        }

        if(flag)
        {
            for(i = 1; i <= n; i++)
            {
                cout << res[i] << " "; 
            }
        }
        else
        {
            cout << -1;
        }
        cout << endl;
    }

return 0;
}
