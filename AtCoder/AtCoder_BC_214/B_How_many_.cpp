#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    ll s, t;
    cin >> s >> t;

    for(i = 0; i <= s; i++)
    {
        for(j = 0; j <= s; j++)
        {
            for(k = 0; k <= s; k++)
            {
                if(i + j + k <= s and i * j * k <= t)
                {
                    ans++;
                }
            }
        }
    }

    cout << ans << endl;

return 0;
}
