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
        
        if(n % 2)
        {
            if(k < m / 2)
            {
                ans = 1;
            }
            k = k - m / 2;
        }
        if(k % 2)
        {
            ans = 1;
        }
        if(m % 2 and n * m - n < 2 * k)
        {
            ans = 1;
        }
        
        if(ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

return 0;
}
