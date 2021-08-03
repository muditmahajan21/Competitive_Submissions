#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int q, i, j, k, n, m, temp, count = 0, ans = 0, sum = 0;
    cin >> n >> m;

    vector<int> graph[n];
    
    for(i = 0; i < m; i++)
    {
        cin >> j >> k;
        j--;
        k--;
        if(j < k)
        {
            graph[j].push_back(k);
        }
        else
        {
            graph[k].push_back(j);
        }
    }
    
    ans = 0;
    for(i = 0; i < n; i++)
    {   
        if(graph[i].empty())
        {
            ans++;
        }
    }

    cin >> q;
    while(q--)
    {
        cin >> i;
        if(i == 1)
        {
            cin >> j >> k;
            j--;
            k--;
            
            if(j < k)
            {
                if(graph[j].empty())
                {
                    ans--;
                }
                graph[j].push_back(k);
            }
            else
            {
                if(graph[k].empty())
                {
                    ans--;
                }
                graph[k].push_back(j);
            }
        }

        else if(i == 2)
        {
            cin >> j >> k;
            j--;
            k--;

            if(j < k)
            {
                graph[j].erase(find(graph[j].begin(), graph[j].end(), k));
                if(graph[j].empty())
                {
                    ans++;
                }
            }
            else
            {
                graph[k].erase(find(graph[k].begin(), graph[k].end(), j));
                if(graph[k].empty())
                {
                    ans++;
                }
            }
        }
        else
        {      
            cout << ans << endl;
        }
    }

return 0;
}
