#include "bits/stdc++.h"
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
        int i, j, x, y, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> x >> y;

        string s;
        cin >> s;

        int r = 0, u = 0, l = 0, d = 0;

        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == 'U')
            {
                u++;
            }
            else if(s[i] == 'D')
            {
                d++;
            }
            else if(s[i] == 'R')
            {
                r++;
            }
            else
            {
                l++;
            }
        }

        if(x < 0 && abs(x) <= l)
        {
            ans = 1;
        }
        else if(x >= 0 && r >= x)
        {
            ans = 1;
        }

        if(y < 0 && abs(y) <= d)
        {
            count = 1;
        }
        else if(y >= 0 && u >= y)
        {
            count = 1;
        }
        
        if(ans == 1 && count == 1)
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
