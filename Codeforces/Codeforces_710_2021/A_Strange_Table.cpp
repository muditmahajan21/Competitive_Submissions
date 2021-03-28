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
        ll i, j, k, n, m, x, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> m >> x;
        
        i = x % n;

        if(i == 0)
        {
            i = n;
        }

        j = x / n + 1;

        if(x % n == 0)
        {
            j -= 1;
        }

        ans = (i - 1) * m;
        ans += j;

        cout << ans << endl;
    }

return 0;
}
