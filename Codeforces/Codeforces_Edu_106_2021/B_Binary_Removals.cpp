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
        string s;
        cin >> s;

        n = s.size();

        vector<char> a(1, s[0]);
        vector<ll> b(1, 1);

        temp = 0;
        for(i = 1; i < n; i++)
        {
            if(s[i] == s[i - 1])
            b[temp]++;
            else
            {
                b.push_back(1);
                a.push_back(s[i]);
                temp++;
            }
        }

        ans = 1;

        ll index = 1;

        while(index < a.size())
        {
            if(a[index] < a[index - 1])
            {
                if(b[index - 1] == 1)
                {
                    if(index >= 2)
                    {
                        b[index] += b[index - 2];
                    }
                    index++;
                }
                else
                {
                    if(b[index] == 1)
                    {
                        if(index < (a.size() - 1))
                        {
                            b[index + 1] += b[index - 1];
                        }
                        index++;
                    }
                    else
                    {
                        ans = 0;
                        break;
                    }
                }
            }
            else
            {
                index++;
            }
        }

        if(!ans)
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
