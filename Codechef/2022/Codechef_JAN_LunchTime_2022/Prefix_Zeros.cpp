
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool ok(string s, ll temp, ll k)
{
    ll sum = 0;
    for(ll i = temp; i >= 0; i--) 
    {
        ll j = (sum + (s[i] - '0')) % 10;
        sum += (10 - j) % 10;
    }
    return sum <= k;
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
        cin >> n >> k;
        string s;
        cin >> s;

        i = 0;
        j = n - 1;
        while(i <= j)
        {
            temp = (i + j) / 2;
            if(ok(s, temp, k))
            {
                i = temp + 1;
                ans = i;
            }
            else
            {
                j = temp - 1;
            }
        }
        cout << ans << endl;    
    }

return 0;
}
