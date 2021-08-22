#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool check(string &res, string &s)
{      
    ll i, n = s.size();
    for(i = 0; i < n; i++)
    {
        if(s[i] == res[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll t = 0; t < test; t++)
    {
        ll i, j, k, n, temp, count = 0, ans = 0;
        string s, res;
        cin >> s;
        
        n = s.length();
        res = s;
        
        bool flag = false;

        for(i = 0; i < n; i++)
        {
            if(s[i] == res[i])
            {
                for(j = 0; j < n; j++)
                {
                    if(i == j)
                    {
                        continue;
                    }
                    if(res[i] != res[j] and s[j] != res[i])
                    {
                        swap(res[i], res[j]);
                        break;
                    }
                }
            }
        }

        flag = check(res, s);

        if(!flag)
        {
            res = "IMPOSSIBLE";
        }

        cout << "Case #" << t + 1 << ": " << res << endl;
    }

return 0;
}