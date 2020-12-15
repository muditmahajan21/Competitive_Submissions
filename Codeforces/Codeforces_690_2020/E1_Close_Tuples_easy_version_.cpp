#include<bits/stdc++.h>
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
        ll i, j, k, n, temp = 0, count = 0, ans = 0;
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        for(i = 0, j = 1; i < n; i++)
        {
            while(j < n && arr[j] - arr[i] <= 2)
            {
                j++;
                count += j - i - 2;
            }
            ans += count;
            count -= j - i - 2;
        }

        cout << ans << endl;
    }

return 0;
}
