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

        map<char, int> mp;
        for(auto c: s)
        {
            mp[c]++;
        }

        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            if(it->second >= 2)
            {
                ans += 2;
            }
            else if(it->second == 1)
            {
                ans++;
            }
        }

        if(ans % 2)
        {
            ans -= 1;
        }

        ans = ans / 2;
        cout << ans << endl;
    }

return 0;
}
