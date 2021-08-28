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
        cin >> n >> k;
        ll arr[n];

        map<ll, ll> mp;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }

        temp = *max_element(arr, arr + n);

        k--;
        for(i = 0; i < n; i++)
        {
            if(temp == arr[i])
            {
                if(i >= k)
                {
                    ans += (n - i);
                }
            }
        }

        cout << ans << endl;
    }

return 0;
}
