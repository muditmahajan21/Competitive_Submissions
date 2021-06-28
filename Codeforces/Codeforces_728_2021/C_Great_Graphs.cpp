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

        //sort(arr, arr + n);
        if(n < 2 || n % 2 == 0)
        {
            ans = 0;
        }
        else
        {
            ans = - arr[n - 1];
        }
        cout << ans << endl;
    }

return 0;
}