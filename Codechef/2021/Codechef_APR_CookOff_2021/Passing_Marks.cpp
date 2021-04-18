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
        ll a_min, b_min, c_min, a, b, c, t_min;
        cin >> a_min >> b_min >> c_min >> t_min >> a >> b >> c;
        sum = a + b + c;

        if(a >= a_min and b >= b_min and c >= c_min and sum >= t_min)
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
