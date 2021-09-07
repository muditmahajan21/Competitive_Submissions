#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll foo(string &s, string &b)
{
    ll n = s.size();
    ll i;

    vector<ll> v, w;
    for(i = 0; i < n; i++)
    {
        if(s[i] == '1')
        {
            v.emplace_back(i);
        }
        if(b[i] == '1')
        {
            w.emplace_back(i);
        }
    }

    if(v.size() != w.size())
    {
        return LONG_LONG_MAX;
    }
    ll ans = 0;
    for(i = 0; i < w.size(); i++)
    {
        ans += abs(v[i] - w[i]);
    }
    return ans;
}

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
        ll arr[n];
        string binary0 = "", binary1 = "";
        string res1 = "", res2 = "";
        ll even = 0;
        ll odd = 0;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2)
            {
                odd++;
                binary0 += "0";
                binary1 += "1";
            }
            else
            {
                even++;
                binary0 += "1";
                binary1 += "0";
            }
            if(i % 2 == 0)
            {
                res1 += "0";
                res2 += "1";
            }
            else
            {
                res1 += "1";
                res2 += "0";
            }
        }

        //cerr << binary0 << " " << binary1 << endl;
        bool flag = false;
        if(n % 2)
        {
            if(odd == even + 1 || odd + 1 == even)
            {
                flag = true;
            }
        }
        else
        {
            if(odd == even)
            {
                flag = true;
            }
        }

        if(!flag)
        {
            cout << -1 << endl;
        }
        else
        {
            ans = min(foo(res1, binary0), foo(res2, binary0));
            ans = min(foo(res1, binary1), foo(res2, binary1));
            cout << ans << endl;
        }
    }

return 0;
}
