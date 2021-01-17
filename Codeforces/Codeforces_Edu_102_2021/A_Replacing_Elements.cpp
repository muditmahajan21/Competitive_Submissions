#include "bits/stdc++.h"
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
        bool flag = true;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] > k)
            {
                flag = false;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
            continue;
        }

        sort(arr, arr + n);

        i = arr[0];
        j = arr[1];

        temp = i + j;

        if(temp > k)
        {
            cout << "NO" << endl;
        }
        else  
        {
            cout << "YES" << endl;
        }
    }

return 0;
}
 
