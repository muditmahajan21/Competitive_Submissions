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
        ll a, b, c, d;
        cin >> a >> b >> c;
        
        if(a > b)
        {
            swap(a, b);
        }

        temp = b - a;
        
        ll size_of_circle = temp * 2;

        if(b > size_of_circle || a > size_of_circle || c > size_of_circle)
        {
            cout << -1 << endl;
            continue;
        }
        else
        {
            ans = c - temp;
            if(ans > 0 and ans <= size_of_circle)
            {
                cout << ans << endl;
                continue;
            }
            else
            {   
                ans = c + temp;
                if(ans > 0 and ans <= size_of_circle)
                {
                    cout << ans << endl;
                    continue;
                }
            }
        }
        cout << -1 << endl;
    }

return 0;
}
