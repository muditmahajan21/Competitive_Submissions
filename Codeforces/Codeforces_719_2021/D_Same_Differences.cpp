/*
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

        map<ll, ll> m;

        for(i = 0; i < n; i++)
        {
            m[arr[i] - i]++;
        }

        for(auto itr = m.begin(); itr != m.end(); itr++)
        {
            temp = itr -> second;
            temp = ((temp) * (temp - 1)) / 2;
            ans += temp;
        }

        cout << ans << endl;
    }

return 0;
}
*/
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

        ll c[n];
        memset(c, 0, sizeof(c));

        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if(arr[j] > arr[i] and (arr[j] - arr[i] == j - i))
                {
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

return 0;
}