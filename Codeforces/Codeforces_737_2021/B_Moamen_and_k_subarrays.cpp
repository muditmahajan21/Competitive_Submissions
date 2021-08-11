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
        map<ll, ll> ind;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            ind[arr[i]] = i;
        }

        sort(arr, arr + n);
        
        for(i = 0; i < n - 1; i++)
        {
            if(ind[arr[i]] == ind[arr[i + 1]] - 1)
            {
                count++;
            }
        }

        ans = n - count;
        
        if(ans <= k)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

return 0;
}
