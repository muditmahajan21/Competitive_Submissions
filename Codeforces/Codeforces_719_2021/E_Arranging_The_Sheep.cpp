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

        vector<ll> ones;
        for(i = 0; i < n; i++)
        {
            if(s[i] == '*')
            {
                ones.push_back(i);
            }
        }

        temp = (ones.size() + 1) / (ll)2 - 1;

        for(i = 0; i < ones.size(); i++)
        {
            ans += (abs(ones[temp] - ones[i]) - abs(temp - i));
        }   

        cout << ans << endl;
    }

return 0;
}
