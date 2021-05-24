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
        unordered_map<ll, ll> m;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < k; i++)
        {
            m.clear();
            for(j = i; j < n; j += k)
            {
                m[arr[j]]++;
            }

            temp = 0; sum = 0;

            for(auto map_itr: m)
            {
                temp = max(temp, map_itr.second);
                sum += map_itr.second;
            }
            sum -= temp;
            ans += sum;
        }
        
        cout << ans << endl;
    }

return 0;
}
