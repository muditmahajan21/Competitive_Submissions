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
    ll n = 1000;
    ll arr[n][n];
    arr[0][0] = 1;
    ll i, j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(j!=0)
                arr[i][j] =arr[i][j-1]+i+j;

            if(i!=0&&j==0)
            {
                arr[i][j]=arr[i-1][j]+i+1;
            }
        }
    }


    while(test--)
    {
        ll k, temp, count = 0, ans = 0, sum = 0;
        ll a, b, x, y;
        cin >> a >> b >> x >> y;
        
        a--;b--;x--;y--;
        for(i = a; i <= x; i++)
        {
            ans += arr[i][b];
        }
        for(j = b + 1; j <= y; j++)
        {
            ans += arr[x][j];
        }
        cout << ans << endl;
    }

return 0;
}

