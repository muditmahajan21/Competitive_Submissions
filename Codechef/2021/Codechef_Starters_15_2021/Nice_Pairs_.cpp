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
        unordered_map<int, int> mp1, mp2;

        for(i = 0; i < n; i++) 
        {
            mp1[(s[i] - '0') - (i + 1)]++;
            mp2[(s[i] - '0') + (i + 1)]++;
        }

        for(auto e: mp1)
        {
            temp = e.second;
            ans += ((temp * (temp - 1)) / 2);
        }

        for(auto e: mp2)
        {
            temp = e.second;
            ans += ((temp * (temp - 1)) / 2);
        }
        cout << ans << endl;
    }

return 0;
}
