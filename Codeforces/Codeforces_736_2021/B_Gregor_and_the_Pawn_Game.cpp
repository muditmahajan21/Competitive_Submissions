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
        string s1, s2;
        cin >> s1;
        cin >> s2;

        for(i = 0; i < n; i++)
        {
            if(s1[i] == '0' and s2[i] == '1')
            {
                ans++;
                s1[i] = -1;
            }
            else if(i > 0 and s1[i - 1] == '1' and s2[i] == '1')
            {
                ans++;
                s1[i - 1] = -1;
            }
            else if(i < n - 1 and s1[i + 1] == '1' and s2[i] == '1')
            {
                ans++;
                s1[i + 1] = -1;
            }
        }

        cout << ans << endl;
    }

return 0;
}
