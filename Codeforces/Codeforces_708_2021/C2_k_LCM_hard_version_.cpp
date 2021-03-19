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
        
        n = n - k + 3;

        if(n % 2)
        {
            a = b = n / 2;
            c = 1;
        }
        else
        {
            if(n % 4 == 0)
            {
                a = n / 2;
                b = c = n / 4;
            }
            else
            {
                a = 2;
                b = (n - 2) / 2;
                c = (n - 2) / 2;
            }
        }

        cout << a << " " << b << " " << c << " ";
        for(i = 0; i < k - 3; i++)
        {
            cout << 1 << " ";
        }
        cout << endl;
    }

return 0;
}
