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

        for(i = 1; i < n; i++)
        {
            if(arr[i] > arr[i - 1] || arr[i - 1] % arr[i] != 0) 
            {
                sum = 1;
                break;
            }
        }

        if(sum || count) cout << -1 << endl;
        else
        {
            for(i = 0; i < n; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

return 0;
}
