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
        ll l, r, i, j, k, n, temp, count = 0, ans = 0;
        cin >> l >> r;

        ans = l % (r + 1);

        if((r + 1) % 2 != 0)
        {
            r++;
        }

        if(ans >=  (r + 1) / 2)
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
