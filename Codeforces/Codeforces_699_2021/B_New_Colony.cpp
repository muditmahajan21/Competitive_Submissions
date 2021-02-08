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
        ll i, j, k, n, temp = -1, count = 0, ans = 0, sum = 0;
        cin >> n >> k;
        ll arr[n], copy[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < k; i++)
        {
            count = 0;
            for(j = 1; j < n; j++)
            {
                if(arr[j - 1] < arr[j])
                {   
                    arr[j - 1] = arr[j - 1] + 1;
                    temp = j - 1;break;
                }
                else 
                {
                    count++;
                }
            }
            if(count == n - 1)
            {
                ans = 1;
                break;
            }
        }

        if(ans == 1)
        {
            cout << -1 << endl;
        }
        else 
        {
            temp++;
            cout << temp << endl;
        }
    }

return 0;
}
