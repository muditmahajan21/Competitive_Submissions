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
        n = 4;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll a, b, c, d;
        a = arr[0];
        b = arr[1];
        c = arr[2];
        d = arr[3];

        sort(arr, arr + n);

        a = max(a, b);
        c = max(c, d);

        if(a == arr[n - 1] || a == arr[n - 2])
        {
            if(c == arr[n - 1] || c == arr[n - 2])
            {
                cout << "YES" << endl;
                ans = 1;
            }
        }

        if(!ans)
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
