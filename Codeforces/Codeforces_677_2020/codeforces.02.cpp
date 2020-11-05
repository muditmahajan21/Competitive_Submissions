#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0;
        cin >> n;
        
        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                arr[i] = -1;
            }
            if(arr[i] == 1)
            {
                break;
            }
        }

        for(i = n - 1; i >= 0; i--)
        {
            if(arr[i] == 0)
            {
                arr[i] = -1;
            }
            if(arr[i] == 1)
            {
                break;
            }
        }

        for(i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

return 0;
}
