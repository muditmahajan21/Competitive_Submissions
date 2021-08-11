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

        for(i = 0; i < n; i++)
        {   
            if(s[i] == 'M')
            {
                for(j = i + 1; j < n; j++)
                {
                    if(s[j] == 'U')
                    {
                        ans = 1;
                        break;
                    }
                }
                if(ans)
                {
                    break;
                }
            }
        }

        if(ans)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

return 0;
}
