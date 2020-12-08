
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
        ll i, j, k, n, temp, count = 0, ans = 0;
        bool flag = false;
        cin >> n >> k;
        ll arr_x[n], arr_y[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr_x[i] >> arr_y[i];    
        }

        for(i = 0; i < n ; i++)
        {   
            count = 0;
            for(j = 0; j < n; j++)
            {   
                temp = abs(arr_x[i] - arr_x[j]) + abs(arr_y[i] - arr_y[j]);
                if(temp <= k)
                {
                    count++;
                }
            }
            if(count == n)
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            ans = 1;
        }
        else  
        {
            ans = -1;
        }

        cout << ans << endl;
    }

return 0;
}
