#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
vector<int> graph[200005];

void dfs(int node, int temp)
{
    sort(graph[node].begin(), graph[node].end());

    cout << node << " ";

    for(int val: graph[node])
    {
        if(val != temp)
        {
            dfs(val, node);
            cout << node << " "; 
        }
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    for(i = 0; i < n - 1; i++)    
    {
        cin >> j >> k;
        graph[j].push_back(k);
        graph[k].push_back(j);
    }

    dfs(1, 0);

return 0;
}
