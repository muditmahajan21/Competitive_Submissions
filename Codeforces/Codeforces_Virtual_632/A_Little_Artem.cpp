#include<bits/stdc++.h>
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
        ll m, i, j, k, n, temp, count = 0, ans = 0;
        cin >> n >> m;
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(i == n - 1 && j == m - 1)
                {
                    cout << 'W';
                }
                else
                {   
                    cout << 'B';
                }
            }
            cout << endl;
        }
    }

return 0;
}
