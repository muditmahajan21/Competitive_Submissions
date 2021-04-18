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
        ll i, j, k, q, n, x, v, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> q;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll bit_count[32];
        memset(bit_count, 0, sizeof(bit_count));

        for(i = 0; i < 32; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(arr[j] & (1 << i))
                {
                    bit_count[i]++;
                }
            }
        }

        for(i = 0; i < 32; i++)
        {
            if(bit_count[i])
            {
                ans += (1 << i);
            }
        }

        cout << ans << endl;

        while(q--)
        {
            cin >> x >> v;
            x--;
            for(i = 0; i < 32; i++)
            {
                if(arr[x] & (1 << i))
                {
                    bit_count[i]--;
                    if(bit_count[i] == 0)
                    {
                        ans = ans - (1 << i);
                    }
                }
            }

            arr[x] = v;

            for(i = 0; i < 32; i++)
            {
                if(arr[x] & (1 << i))
                {
                    bit_count[i]++;
                    if(bit_count[i] == 1)
                    {
                        ans = ans + (1 << i);
                    }
                }
            }
            cout << ans << endl;
        }
    }

return 0;
}
