#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
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

        ll bits[32];
        for(i = 0; i < 32; i++)
        {
            bits[i] = 0;
            for(j = 0; j < n; j++)
            {
                if(arr[j] & (1 << i))
                {
                    bits[i]++;
                }
            }
        }
        
        k = (n + 1) / 2;
        temp = 1;
        for(i = 0; i < 32; i++)
        {   
            if(bits[i] >= k)
            {   
                ans += temp;
            }
            temp *= 2;
        }

        for(i = 0; i < n; i++)
        {
            sum |= (ans ^ arr[i]);
        }
        cout << ans << " " << sum << endl;
    }

return 0;
}
