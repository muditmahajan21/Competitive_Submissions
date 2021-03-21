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
        ll w1, w2, x1, x2, m;
        cin >> w1 >> w2 >> x1 >> x2 >> m;

        temp = (w2 - w1);
        sum = m * x1;
        ans = m * x2;

        if(sum <= temp && temp <= ans)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

return 0;
}
