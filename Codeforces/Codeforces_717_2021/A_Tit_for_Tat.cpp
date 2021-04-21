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
        cin >> n >> k;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        i = 0; j = n - 1;
        while(i != n - 1)
        {
            if(arr[i] == 0)
            {
                i++;
            }
            else
            {
                if(k > arr[i])
                {   
                    arr[j] += arr[i];
                    k -= arr[i];
                    arr[i] = 0;
                }
                else
                {
                    arr[i] -= k;
                    arr[j] += k;
                    k = 0;
                }
                i++;
            }
            if(k <= 0)
            {
                break;
            }
        }

        for(i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

return 0;
}
