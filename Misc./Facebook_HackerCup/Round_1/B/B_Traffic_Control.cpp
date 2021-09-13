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
    for(ll t = 1; t <= test; t++)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        ll m, a, b;
        cin >> n >> m >> a >> b;

        temp = n + m - 1;
        
        if(a < temp || b < temp)
        {
            cout << "Case #" << t << ": " << "Impossible" << endl;
        }
        else
        {   
            cout << "Case #" << t << ": " << "Possible" << endl;
            
            for(i = 0 ; i < m; i++)
            {
                cout << 1 << " ";
            }
            cout << endl;
            
            for(i = 1; i < n - 1; i++)
            {
                for(j = 0; j < m; j++)
                {
                    if(j == 0 || j == m - 1)cout << 1;
                    else cout << 1000;
                    cout << " ";
                }
                cout << endl;
            }
           
            cout << b - (temp - 1) << " ";
            for(i = 1; i < m - 1; i++)
            {
                cout << 1000 << " ";
            }
            cout << a - (temp - 1) << " ";
            cout << endl;
        }
    }

return 0;
}
