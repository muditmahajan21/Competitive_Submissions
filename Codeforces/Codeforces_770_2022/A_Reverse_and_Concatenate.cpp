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
        cin >> n >> k;
        string s;
        cin >> s;
        
        bool flag = true;
        i = 0;
        j = n - 1;
        while(i <= j)
        {
            if(s[i++] != s[j--])
            {
                flag = false;
                break;
            }
        }

        if(flag || !k)
        {
            ans = 1;
        }
        else
        {
            ans = 2;
        }

        cout << ans << endl;
    }

return 0;
}
