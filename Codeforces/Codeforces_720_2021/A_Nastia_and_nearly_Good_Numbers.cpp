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
        ll a, b;
        cin >> a >> b;

        if(b == 1)
        {
            cout << "NO" << endl;
        }
        else if(a % b == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            i = a;
            j = a * b;
            k = i + j;
            cout << i << " " << j << " " << k << endl;
        }
    }

return 0;
}
