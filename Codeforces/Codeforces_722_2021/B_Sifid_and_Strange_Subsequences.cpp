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
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);
        temp = upper_bound(arr, arr + n, 0) - arr;
        
        if(temp == n)
        {
            cout << n << endl;
            continue;
        }
        else if(temp <= 1)
        {
            cout << temp + 1 << endl;
            continue;
        }
        else if(temp >= 2)
        {
            k = LONG_LONG_MAX;

            for(i = 0; i < temp - 1; i++)
            {
                k = min(k, abs(arr[i] - arr[i + 1]));
            }
            if(arr[temp] <= k)
            {
                ans = temp + 1;
            }
            else
            {
                ans = temp;
            }
            cout << ans << endl;
        }
    }

return 0;
}
