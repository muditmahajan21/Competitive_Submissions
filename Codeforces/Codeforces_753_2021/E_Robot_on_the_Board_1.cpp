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
        ll i, j, k, n, m, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<vector<ll>> dp(n + 5, vector<ll> (m, 0));

        ans = 0;

        for(i = 0; i < n; i++) 
        {
            for(j = 0; j < m; j++)
            {       
                ll ii = i;
                ll jj = j;
                for(k = 0; k < s.size(); k++)
                {   
                    temp = 0;
                    if(s[k] == 'L' and ii - 1 >= 0 and jj < m and ii - 1 < n and jj >= 0)
                    {
                        temp++;
                        ii--;

                    }
                    else if(s[k] == 'R' and ii + 1 >= 0 and ii + 1 < n and jj >= 0 and jj < m)
                    {
                        temp++;
                        ii++;
                    }
                    else if(s[k] == 'U' and ii >= 0 and ii < n and jj - 1 >= 0 and jj - 1 < m)
                    {
                        temp++;
                        jj--;
                    }
                    else if(s[k] == 'D' and ii >= 0 and ii < n and jj + 1 >= 0 and jj + 1 < m)
                    {
                        temp++;
                    }
                    else if(ii < 0 || jj < 0 || ii >= n || jj >= m)
                    {
                        break;
                    }
                }
                dp[i][j] = max(temp, dp[i][j]);
                if(dp[i][j] >= ans)
                {
                    temp = i;
                    sum = j;
                    ans = dp[i][j];
                }
            }
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cerr << dp[i][j]  << " ";
            }
            cerr << "\n";
        }
        cerr << "\n";

        cout << temp + 1 << " " << sum + 1 << endl;
    }

return 0;
}
