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

        bool flag = false;
        ll m[26];
        memset(m, 0, sizeof(m));

        for(i = 0; i < n - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                if(m[s[i + 1] - 'A'] == 1)
                {
                    flag = true;
                    break;
                }
            }
            m[s[i] - 'A'] = 1;
        }

        if(flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

return 0;
}
