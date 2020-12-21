#include<bits/stdc++.h>
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
        ll x, y, i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> x >> y >> k >> n;

        ans = abs(x - y);

        if(ans % (2 * k) == 0 && ans / (2 * k) <= n)
        {
            cout << "Yes" << endl;
        }
        else  
        {
            cout << "No" << endl;
        }
    }

return 0;
}
