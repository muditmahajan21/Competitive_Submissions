
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

        sort(arr, arr + n);

        temp = arr[1] - arr[0];
        ll diff;

        for(i = 1; i < n; i++)
        {
            diff = arr[i] - arr[i - 1];
            temp = min(temp, diff);
            if(temp == diff)
            {
                k = i - 1;
            }   
        }

        cout << arr[k] << " ";
        for(i = k + 2; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        for(i = 0; i < k; i++)
        {
            cout << arr[i] << " ";
        }

        cout << arr[k + 1] << " " << endl;

    }

return 0;
}
