#include "bits/stdc++.h"
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
       
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<ll>());
        
        ll r = n - 1;
        i = 0;

        while(i <= r)
        {
            if(arr[i] >= k)
            {
                i++;
                count++;
            }
            else
            {
                while(arr[i] + arr[r] < k && r > i)
                {
                    r--;
                }
                if(r > i && arr[i] + arr[r] >= k)
                {
                    count++;
                    r--;
                }
                else
                {
                    break;
                }
                i++;
            }
        }

        cout << count << endl;
    }

return 0;
}
