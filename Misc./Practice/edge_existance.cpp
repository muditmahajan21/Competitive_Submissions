#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll m, i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n >> m;
    bool graph[n][m];

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            graph[i][j] = false;
        }
    }

    

    for(i = 0; i < m; i++)
    {
        cin >> j >> k;
        j--;k--;
        graph[j][k] = true;
        graph[k][j] = true;
    }
    
    ll q;
    cin >> q;
    while(q--)
    {
        cin >> j >> k;
        j--;k--;
        if(graph[j][k])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
