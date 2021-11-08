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
        string s, t;
        cin >> s;
        map<char, int> mp;
        for(i = 0; i < s.size(); i++)
        {
            mp[s[i]] = i;
        }
        cin >> t;
        for(i = 1; i < t.size(); i++)
        {
            ans += abs(mp[t[i]] - mp[t[i - 1]]);
        }
        cout << ans << endl;
    }

return 0;
}
