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
        ll m, r, c, i, j, k, n, temp, count = 0, ans = 0;
        cin >> n >> m >> r >> c;

        i = max(n - r, r - 1);
        j = max(m - c, c - 1);

        ans = i + j;

        cout << ans << endl;
    }

return 0;
}
