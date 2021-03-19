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

        ll a, b;
        a = arr[0];
        b = arr[1];

        ll cost1, cost2;
        cost1 = cost2 = 0;
        j = k = 0;

        ans = n * a + n * b;

        for(i = 2; i < n; i++)
        {   
            if(i % 2)
            {   
                k++;
                if(arr[i] < b)
                {
                    cost2 += b;
                    b = arr[i];
                }
                else
                {
                    cost2 += arr[i];
                }
                temp = cost1 + (n - j) * a + cost2 + (n - k) * b;
                ans = min(ans, temp);
            }
            else
            {
                j++;
                if(arr[i] < a)
                {
                    cost1 += a;
                    a = arr[i];
                }
                else
                {
                    cost1 += arr[i];
                }
                temp = cost1 + (n - j) * a + cost2 + (n - k) * b;
                ans = min(ans, temp);
            }
            
        }

        cout << ans << endl;
    }

return 0;
}
