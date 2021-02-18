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
        ll k, n, m, temp, ans = 0;
        cin >> n >> m;
        
        temp = max(n, m);

        k = (temp - 1) * (temp - 1);

        if(temp % 2)
        {
            if(n == temp)
            {
                ans = k + m;
            }
            else
            {
                ans = k + 2 * temp - n;
            }
        }
        else
        {
            if(m == temp)
            {
                ans = k + n;
            }
            else
            {
                ans = k + 2 * temp - m;
            }
        }

        cout << ans << endl;
    }

return 0;
}
