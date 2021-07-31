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
        ll i, j, k, d, h, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> d >> h;
        
        while(n--)
        {
            cin >> temp;
            if(temp)
            {
                ans += temp;
            }
            else
            {
                ans = max(0LL, ans - d);
            }
            if(ans > h)
            {
                sum = 1;
            }
        }

        if(sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
