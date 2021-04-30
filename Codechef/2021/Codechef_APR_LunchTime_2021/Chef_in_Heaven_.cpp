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
        ll i, j, k, n, temp = -1, count = 0, ans = 0, sum = 0;
        cin >> n;
        string s;
        cin >> s;

        for(i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
            else
            {
                ans++;
            }
            if(ans >= count)
            {
                sum = 1;
                break;
            }
        }
        if(sum)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        

    }

return 0;
}
