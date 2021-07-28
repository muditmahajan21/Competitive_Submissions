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
        
        map<ll, ll> mp;
        /* Let's check for only the smallest element*/
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for(i = 0; i < n; i++)
        {
            mp[arr[i]]++;
        }

        ans = n - mp[arr[0]];

        for(i = mp[arr[0]]; i < n; i++)
        {
            temp = arr[i] % (arr[i] - arr[0]);
            if(temp != arr[0])
            {
                ans = n;
                break;
            }
        }

        cout << ans << endl;
    }   

return 0;
}
