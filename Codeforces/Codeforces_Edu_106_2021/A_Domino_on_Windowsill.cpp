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
        ll i, j, k1, k2, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k1 >> k2;
        ll w, b;
        cin >> w >> b;

        if(k1 > k2)
        {
            temp = k1;
            k1 = k2;
            k2 = temp;
        }

        ans = k1 + (k2 - k1) / 2;
        if(w > ans)
        {
            cout << "NO" << endl;
            continue;
        }

        count = (k2 - k1) / 2 + (n - k2);

        if(b > count)
        {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
    }

return 0;
}
