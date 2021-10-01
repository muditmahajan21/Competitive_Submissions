#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll find_last(string s, char end)
{
    for(ll i = s.size() - 1; i >= 0; i--)
    {
        if(s[i] == end)
        {
            return i;
        }
    }
    return -1;
}


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, ans = 0, sum = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        temp = 0;
        for(i = 0; i < n - 1; i++)
        {
            if(s[i] != s[i + 1])
            {
                temp++;
            }
        }

        //cerr << temp << endl;
        if(temp < k)
        {
            cout << -1 << endl;
        }
        else
        {
            if(s[i] == '0')
            {
                if(k % 2)
                {
                    ans = find_last(s, '1');
                }
                else
                {
                    ans = find_last(s, '0');
                }
            }
            else
            {
                if(k % 2)
                {
                    ans = find_last(s, '0');
                }
                else
                {
                   ans = find_last(s, '1');
                }
            }
            ans++;
            cout << ans << endl;
        }
    }

return 0;
}

