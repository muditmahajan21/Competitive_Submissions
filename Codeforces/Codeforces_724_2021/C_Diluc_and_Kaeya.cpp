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
        string s;
        cin >> s;

        n = s.size();
        ll a, b, d = 0;
        k = 0;
        map<pair<ll, ll>, ll> m;

        for(i = 0; i < n; i++)
        {
            if(s[i] == 'D')
            {
                d++;
            }
            else
            {
                k++;
            }

            temp = __gcd(d, k);
            a = d / temp;
            b = k / temp;

            m[ {a, b} ]++;
            ans = m[ {a, b} ];

            cout << ans << " ";
        }
        cout << endl;
    }

return 0;
}
