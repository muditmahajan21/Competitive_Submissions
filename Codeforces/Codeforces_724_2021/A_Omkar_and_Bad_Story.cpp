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
            if(arr[i] < 0)
            {
                count = 1;
            }
        }

        sort(arr, arr + n);

        if(!count)
        {
            cout << "YES" << endl;
            cout << arr[n - 1] + 1 << endl;
            for(i = 0; i < arr[n - 1] + 1; i++)
            {
                cout << i << " ";
            } 
            cout << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
