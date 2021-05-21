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

        unordered_map<ll, ll> m2;
        unordered_map<ll, bool> m1;

        for(i = 0; i < n; i++)
        {
            if(!m1[arr[i]])
            {
                m1[arr[i]] = true;
            }
            else
            {
                ans += ((n - i) * m2[arr[i]]);
            }
            m2[arr[i]] += (i + 1);
        }
        cout << ans << endl;
    }   

return 0;
}