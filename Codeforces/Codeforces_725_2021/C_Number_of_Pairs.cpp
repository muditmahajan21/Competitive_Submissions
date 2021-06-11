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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0, l, r;
        cin >> n >> l >> r;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        ll low = n - 1;
        ll high = n - 1;
        i = 0;

        while(i < high)
        {
            low = max(i, low);
            while(low > i and arr[i] + arr[low] >= l)
            {
                low--;
            }

            while(high > low and arr[i] + arr[high] > r)
            {
                high--;
            }

            ans += (high - low);
            i++;
        }

        cout << ans << endl;
    }

return 0;
}
