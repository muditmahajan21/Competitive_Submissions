#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll search(ll *array, ll start_idx, ll end_idx, ll search_val) {

    if( start_idx == end_idx )
        return array[start_idx] <= search_val ? start_idx : -1;

    ll mid_idx = start_idx + (end_idx - start_idx) / 2;

    if( search_val < array[mid_idx] )
        return search( array, start_idx, mid_idx, search_val );

    ll ret = search( array, mid_idx+1, end_idx, search_val );
    return ret == -1 ? mid_idx : ret;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0, rp;
    cin >> n;
    ll arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    sort(arr, arr + n);
    ll q;

    cin >> q;
    while(q--)
    {
        cin >> j >> k;
        ans = 0;

        ll t = sum;
        if(j <= arr[0])
        {
            ans = 0;
            t -= arr[0];
        }
        else
        {
            temp = search(arr, 0, n - 1, j);
            rp = temp;
            ans += max(0LL, j - arr[temp]);
            t -= arr[temp];
        }

        temp = max(0LL, k - t);
        ans += temp;

        temp = rp;
        if(temp != n - 1)
        {   
            count = 0;
            temp++;
            t = sum;
            count += max(0LL, j - arr[temp]);
            t -= arr[temp];

            temp = max(0LL, k - t);
            count += temp;

            ans = min(ans, count);
        }

        cout << ans << endl;
    } 

return 0;
}
