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
        n *= 2;
        ll arr[n + 1];
        
        for(i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + n + 1);
        
        for(i = 2   ; i <= n / 2; i += 2)
        {
            swap(arr[i], arr[ n - i + 1]);
        }

        for(i = 1; i <= n; i++)
        {
            //if(arr[i] % 2 != 0)
            //{
                cout << arr[i] << " ";
            //}
        }

        cout << endl;
    }

return 0;
}
