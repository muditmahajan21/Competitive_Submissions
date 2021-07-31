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
        cin >> n;

        //every pizza takes 2.5 minutes.

        if(n <= 6)
        {
            ans = 15;
        }
        else
        {
            if(n % 2)
            {
                n++;
            }
            n *= 5;
            ans = n / 2;
        }
        cout << ans << endl;
    }

return 0;
}
