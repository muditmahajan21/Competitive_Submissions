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
        string s, c;
        cin >> s;
        n = s.size();

        for(i = 0; i < n; i++)
        {
            c.push_back(s[i]);
            if(s[i] == 'a')
            {
                temp = i;
            }
        }

        sort(s.begin(), s.end());
        for(i = 0; i < n; i++)
        {
            if(s[i] - 'a' != i)
            {
                ans = 1;
                cout << "NO" << endl;
                break;
            }
        }
        
        if(!ans)
        {
            for(i = 0; i < temp - 1; i++)
            {
                if(c[i] < c[i + 1])
                {
                    ans = 1;
                    cout << "NO" << endl;
                    break;
                }
            }
            if(!ans)
            {
                for(i = temp; i < n - 1; i++)
                {
                    if(c[i] > c[i + 1])
                    {
                        ans = 1;
                        cout << "NO" << endl;
                        break;
                    }
                }
            }

            if(!ans)
            {
                cout << "YES" << endl;
            }
        }
    }

return 0;
}
