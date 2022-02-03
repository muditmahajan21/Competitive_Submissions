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
        ll a, b, c;
        cin >> a >> b >> c;
        i = 2 * b - c;
        j = 2 * b - a;
        k = (a + c) / 2;

        if((i >= a and i % a == 0) || (j >= c and j % c == 0) || (a + c) % 2 == 0 and k >= b and k % b == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

return 0;
}
