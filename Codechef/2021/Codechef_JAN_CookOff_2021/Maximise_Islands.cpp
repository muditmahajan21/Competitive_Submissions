#include "bits/stdc++.h"
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
        ll i, m, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> m;
        string s;
        while(n--)
        {
            cin >> s;
            for(j = 0; j < m - 1; j++)
            {
                if(s[j] == s[j + 1])
                {
                    if(s[j] == '.')
                    {
                        s[j + 1] = '*';
                    }
                    else  
                    {
                        s[j + 1] = '.';
                    }
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }

return 0;
}
