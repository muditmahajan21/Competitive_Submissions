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
        ll m = 5;
        ll mat[n][m];

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        k = 0;

        for(i = 1; i < n; i++)
        {
            temp = 0;
            for(j = 0; j < m; j++)
            {
                if(mat[i][j] < mat[k][j])
                {
                    temp++;
                }
            }
            if(temp > 2)
            {
                k = i;
            }
        }

        for(i = 0; i < n; i++)
        {
            temp = 0;
            if(i == k)
            {
                continue;
            }
            
            for(j = 0; j < m; j++)
            {
                if(mat[k][j] < mat[i][j])
                {
                    temp++;
                }
            }
            if(temp <= 2)
            {
                sum = 1;
                break;
            }
        }

        if(!sum)
        {
            ans = k + 1;
        }
        else
        {
            ans = -1;
        }

        cout << ans << endl;
    }

return 0;
}
