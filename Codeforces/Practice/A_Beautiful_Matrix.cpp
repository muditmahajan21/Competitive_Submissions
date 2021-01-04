#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    ll arr[5][5];

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            cin >> arr[i][j]; 
            if(arr[i][j] == 1)
            {
                k = i;
                n = j;
            }
        }
    }

    ans = abs(k - 2) + abs(n - 2);

    cout << ans << endl;

return 0;
}
