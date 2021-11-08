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
        temp = pow(2, n);
        cout << 1 << " ";
        sum = 1;
        for(i = 1; i < n; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << temp - sum << " ";
        cout << endl;
    }

return 0;
}
