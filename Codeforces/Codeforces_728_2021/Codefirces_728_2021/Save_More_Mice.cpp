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
        ll i, j, k, n, temp, cat_pos = 0, ans = 0, sum = 0;
        cin >> n >> k;
        ll arr[k];
        
        for(i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + k, greater<ll>());

        for(i = 0; i < k; i++)
        {       
            if(cat_pos >= arr[i])
            {
                break;
            }
            if(arr[i] > n) continue;
            
            cat_pos += (n - arr[i]);
            ans++;            
        }

        cout << ans << endl;
    }

return 0;
}