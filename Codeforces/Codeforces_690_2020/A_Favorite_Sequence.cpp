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
        ll i, j, k, n, temp, count = 0, ans = 0;
        cin >> n ;
        ll arr[n], res[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(n % 2 != 0)
        {
            k = (n + 1) / 2;
        }
        else
        {
            k = n / 2;
        }

        j = 0;
        for(i = 0; i < k; i++)
        {
            res[j] = arr[i];
            
            j += 2;
        }

        j = 1;
        for(i = n - 1; i >= k; i--)
        {
            res[j] = arr[i];
            j += 2;
        }

        for(i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }

        cout << endl;
    }

return 0;
}
