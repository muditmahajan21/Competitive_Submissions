#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

ll ans = 0; 
bool ld[15], rd[15], row[7];
char board[8][8];

void rec(ll j)
{
        if(j == 8)
        {
                ans++;
                return;
        }
        for(ll i = 0; i < 8; i++)
        {
                if(board[i][j] == '.' && ld[i - j + 7] == 0 && rd[i + j] == 0 && row[i] == 0)
                {
                        ld[i - j + 7] = 1;
                        rd[i + j] = 1;
                        row[i] = 1;
                        rec(j + 1);
                        ld[i - j + 7] = 0;
                        rd[i + j] = 0;
                        row[i] = 0;
                }
        }
}

int main()
{
        ll i, j, n;
        n = 8;
        for(i = 0; i < n; i++)
        {
                for(j = 0; j < n; j++)
                {
                        cin >> board[i][j];
                }
        }

        rec(0);

        cout << ans << endl;
return 0;
}
