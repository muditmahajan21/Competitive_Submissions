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
        if(n < 1600)
        {
            ans = 3;
        }
        else if(n >= 1600 and n < 2000)
        {
            ans = 2;
        }
        else
        {
            ans = 1;
        }
        cout << ans << endl;
    }

return 0;
}
