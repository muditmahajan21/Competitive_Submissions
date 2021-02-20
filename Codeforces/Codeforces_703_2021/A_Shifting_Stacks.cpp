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
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
            {
                count++;
            }
        }

        temp = arr[0];

        for(i = 1; i < n; i++)
        {
            if(arr[i] < i)
            {
                if(temp + arr[i] < i)
                {
                    ans = 1;
                    break;
                }
                else
                {
                    temp = temp - (i - arr[i]);
                }
            }
            else
            {
                temp = temp + abs(i - arr[i]);
            }
        }

        if(ans)
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
