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
        ll a, y, x;
        cin >> a >> y >> x;

        sum = 1 + a * x;
        temp = a - y;

        ans = sum - temp * x;

        if(y > a)
        {
            ans = 1 + a * x;
        }
        else
        {
            ans--;
        }
        cout << ans << endl;
    }

return 0;
}
/*
0 1
0 -> 1: 5   6   
1 -> 2: 5   11  1
2 -> 3: 5   16  5
3 -> 4: 5   21  5
4 -> 5: 5   26  5
*/