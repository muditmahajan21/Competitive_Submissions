#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n >> j;
    ll arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 1)
        {
            count++;
        }
    }

    while(j--)
    {
        cin >> temp >> k;

        if(temp == 1)
        {
            if(arr[k - 1] == 1)
            {
                count--;
            }
            else
            {
                count++;
            }
            arr[k - 1] = 1 - arr[k - 1];
        }

        else
        {
            if(k <= count)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

return 0;
}
