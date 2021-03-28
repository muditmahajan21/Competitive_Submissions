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
        ll i, j, k, n, temp = 0, count = 0, ans = 0, sum = 0;
        cin >> n;
        ll arr[n];
        map<ll, ll> c;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i]]++;
        }

        for(auto itr: c)
        {
            temp = max(temp, itr.second);
        }

        ans = n - temp;
        count = temp - ans;

        ans = 0;
        ans = max(ans, count);
        ans = max(ans, n % 2);

        cout << ans << endl;
    }

return 0;
}
