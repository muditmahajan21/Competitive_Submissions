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
        ll a, b, c;
        
        if(n % 2)
        {
            a = b = n / 2;
            c = 1;
        }
        else
        {
            n /= 2;
            if(n % 2 == 0)
            {
                a = n;
                b = c = n / 2;
            }
            else
            {
                a = b = n - 1;
                c = 2;
            }
        }

        cout << a << " " << b << " " << c << endl;
    }

return 0;
}
