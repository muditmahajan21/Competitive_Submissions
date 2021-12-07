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
        vector<ll> arr(n); 
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(arr[0] != n and arr[n - 1] != n)
        {
            ans = -1;
        }
        else
        {
            if(arr[n - 1] == n)
            {
                reverse(arr.begin(), arr.begin() + n - 1);
            }
            else if(arr[0] == n)
            {       
                reverse((arr.begin() + 1), arr.end());
            }
        }

        if(ans == -1)
        cout << ans << endl;
        else 
        {
            for(auto e: arr) cout << e << " ";
            cout << endl;
        }
    }

return 0;
}
