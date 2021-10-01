#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
const ll MAX = 1000000;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        ll a, b;
        cin >> a >> b;

        if(b > a)
        {
            b %= a;
        }
        
        i = 0;
        while(b <= sqrt(LONG_LONG_MAX) and i < 60)
        {   
            if(b % a == 0)
            {   
                //cout << b << " " << a << endl;
                ans = 1;
                break;
            }
            b *= b;
            i++;
        }

        if(!ans)
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
