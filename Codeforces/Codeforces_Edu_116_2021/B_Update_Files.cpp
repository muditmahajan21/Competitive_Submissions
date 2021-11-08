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
        if(k == 1)
        {
            ans = n - 1;
        }
        else
        {
            n--;
            ll curr = 1;
            while(n)
            {
                if(k < curr)
                {
                    break;
                }
                n -= curr;
                curr *= 2;
                ans++;
            }
            ans += (n + k - 1) / k;
        }
        cout << ans << endl;
    }

return 0;
}
