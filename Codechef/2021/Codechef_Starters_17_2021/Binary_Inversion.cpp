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
        ll i, j, k, n, m, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> m;
        vector<string> arr;
        string s;
        for(i = 0; i < n; i++)
        {   
            cin >> s;
            arr.push_back(s);
        }
       
        vector<pair<ll, string>> pls;       

        for(auto e: arr)
        {
            bool one = false;
            count = 0;
            ans = 0;
            for(auto f: e)
            {   
                if(f == '0')ans++;
            }
            pls.push_back( {ans, e} );
        }

        sort(pls.begin(), pls.end(), greater<pair<ll, string>>());
        string t = "";

        for(auto e: pls) 
        {
            t += e.second;
        }

        bool one = false;
        count = 0;
        ans = 0;
        for(auto f: t)
        {   
            if(f == '1')
            {   
                one = true;
                count++;
            }
            else
            {   
                if(one)
                ans += count;
            }
        }

        cout << ans << endl;
    }

return 0;
}
