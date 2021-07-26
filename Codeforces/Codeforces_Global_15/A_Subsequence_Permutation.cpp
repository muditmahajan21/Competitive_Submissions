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
        string t = s;
        sort(s.begin(), s.end());

        for(i = 0; i < n; i++)
        {
            if(s[i] != t[i])
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

return 0;
}
