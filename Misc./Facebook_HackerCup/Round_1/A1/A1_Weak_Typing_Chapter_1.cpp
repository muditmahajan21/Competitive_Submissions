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
    for(ll t = 1; t <= test; t++)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        string s;
        
        cin >> s;

        bool x = true;
        bool o = false;

        for(i = 0; i < n; i++)
        {
            if(s[i] == 'F')
            {
                continue;
            }
            else if(s[i] == 'X' and o)
            {
                o = false;
                x = true;
                count++;
            }
            else if(s[i] == 'O' and x)
            {
                x = false;
                o = true;
                count++;
            }
        }

        x = false;
        o = true;
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'F')
            {
                continue;
            }
            else if(s[i] == 'X' and o)
            {
                o = false;
                x = true;
                ans++;
            }
            else if(s[i] == 'O' and x)
            {
                x = false;
                o = true;
                ans++;
            }
        }

        ans = min(ans, count);

        cout << "Case #" << t << ": " << ans << endl;
    }

return 0;
}