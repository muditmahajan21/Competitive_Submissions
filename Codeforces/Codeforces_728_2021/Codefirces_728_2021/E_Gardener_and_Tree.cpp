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
        cin >> n >> temp;
        vector<ll> graph[n];
        vector<ll> indegree(n);
        
        for(i = 0; i < n - 1; i++)
        {
            cin >> j >> k;
            j--;k--;
            graph[j].push_back(k);
            graph[k].push_back(j);
            indegree[j]++;
            indegree[k]++;
        }

        vector<bool> marked(n, false);

        queue<ll> q;
        for(i = 0; i < n; i++)
        {
            if(indegree[i] <= 1)
            {   
                marked[i] = true;
                q.push(i);
            }
        }

        k = temp;
        queue<ll> new_queue;
        while(k--)
        {   
            ll len = q.size();
            count += len;
            new_queue = {};
            while(!q.empty())
            {
                ll node = q.front();
                q.pop();
                for(auto e: graph[node])
                {       
                    indegree[e]--;
                    if(!marked[e] and indegree[e] <= 1)
                    {   
                        marked[e] = true;
                        new_queue.push(e);
                    }
                }
            }
            swap(q, new_queue);
        }

        ans = n - count;
        cout << ans << endl;
    }

return 0;
}
