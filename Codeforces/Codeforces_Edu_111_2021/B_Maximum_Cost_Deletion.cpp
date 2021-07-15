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
        ll a, b;
        cin >> n >> a >> b;
        string s;
        cin >> s;

        ll count0 = 0;
        ll count1 = 0;
        for(i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                count0++;
            }
            else
            {
                count1++;
            }
        }

        if(b >= 0)
        {
            ans = (a + b) * n;
        }
        else 
        {
            char c = s[0], no_repeat = s[0];
            for(i = 0; i < n; i++)
            {
                if(c != s[i] and s[i] != no_repeat)
                {
                    count++;
                }
                c = s[i];
            }
            count++;
            ans = n * a + count * b;
        }

        cout << ans << endl;
    }

return 0;
}