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
        
        multiset<ll> mst;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            mst.insert(arr[i]);
        }

        sort(arr, arr + n);
        ans = LONG_LONG_MIN;
        ll minus = 0;

        for(i = 0; i < n; i++)
        {
            temp = *mst.begin();
            temp += minus;
            ans = max(ans, temp);
            minus -= temp;
            mst.erase(mst.begin());
        }

        cout << ans << endl;
    }

return 0;
}