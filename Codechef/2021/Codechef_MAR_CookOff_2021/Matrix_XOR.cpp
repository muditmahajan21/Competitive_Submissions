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
        ll i, j, k, n, m, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> m >> k;
        
        ll a, b;
        a = min(n, m);
        b = max(n, m);

        ll c[a + b - 1];
        temp = 0;
        for(i = 0; i < a; i++)
        {
            temp++;
            c[i] = temp;   
            j = i;
        }
        j++;
        while(j < b)
        {
            c[j] = temp;
            j++;
        }
        
        temp--;
        while(j < a + b - 1)
        {
            c[j] = temp;
            temp--;
            j++;
        }

        for(i = 0; i < a + b - 1; i++)
        {
            if(c[i] % 2)
            {
                ans ^= (i + 2 + k);
            }
        }

        cout << ans << endl;
    }

return 0;
}
