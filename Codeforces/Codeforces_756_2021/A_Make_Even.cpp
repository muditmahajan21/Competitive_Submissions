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
        string s = to_string(n);

        if(n % 2 == 0) 
        {
            ans = 0;
        }
        else
        {
            if((s[0] - '0') % 2 == 0)
            {
                ans = 1;
            }
            else 
            {
                for(auto e: s)
                {
                    if((e - '0') % 2 == 0)
                    {
                        ans = 2;
                        break;
                    }
                }
                if(ans == 0)
                {
                    ans = -1;
                }
            }
        }
        cout << ans << endl;
    }

return 0;
}
