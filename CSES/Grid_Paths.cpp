#include<bits/stdc++.h>
using namespace std;
const int MOD = 1e9 + 7;
const int max_size = 1010;

int dp[max_size][max_size];
int obstacles[max_size][max_size];

int main()
{
    int n;
    cin >> n;

    int i, j;
    string s;

    for(i = 1; i <= n; i++)
    {
        cin >> s;

        for(j = 1; j <= n; j++)
        {
            if(s[j - 1] == '*')
            {
                obstacles[i][j] = 1;
            }
            else
            {
                obstacles[i][j] = 0;
            }
        }
    }

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n; j++)
        {
            if(i == 1 and j == 1)
            {
                if(obstacles[i][j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = 1;
                }
            }
            else
            {
                if(obstacles[i][j])
                {
                    dp[i][j] = 0;
                }
                else
                {
                    dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % MOD;
                }
            }
        }
    }

    cout << dp[n][n] << endl;

return 0;
}