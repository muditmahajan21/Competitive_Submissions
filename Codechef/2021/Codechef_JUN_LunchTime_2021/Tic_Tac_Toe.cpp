#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--)
    {
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        int m;
        cin >> n >> m >> k;
        
        swap(n, m);
        int turn = k * k * 2;
        int alice[n][m], bob[n][m];

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                alice[i][j] = 0;
                bob[i][j] = 0;
            }
        }

        if(turn > n * m)
        {
            cout << "Draw" << endl;
            continue;
        }
        else
        {
            for(temp = 0; temp < n * m; temp++)
            {   
                cin >> i >> j;
                i--;j--;
                if(temp % 2 == 0)
                {
                    alice[i][j] = 1;
                }
                else
                {
                    bob[i][j] = 1;
                }

                if(temp >= turn)
                {
                    int check[n][m];

                    /*Alice check*/
                    for(i = 0; i < n; i++)
                    {
                        check[i][0] = alice[i][0];
                    }
                    for(j = 0; j < m; j++)
                    {
                        check[0][j] = alice[0][j];
                    }
                    for(i = 1; i < n; i++)
                    {
                        for(j = 1; j < n; j++)
                        {
                            if(alice[i][j] == 1)
                            {
                                check[i][j] = min(check[i - 1][j - 1], min(check[i - 1][j], check[i][j - 1])) + 1;
                            }
                            else
                            {
                                check[i][j] = 0;
                            }
                        }
                    }

                    for(i = 0; i < n; i++)
                    {
                        for(j = 0; j < n; j++)
                        {
                            if(check[i][j] == k)
                            {
                                ans = 1;
                                break;
                            }
                        }
                        if(ans)break;
                    }

                    if(ans)break;

                    /*Bob check*/
                    for(i = 0; i < n; i++)
                    {
                        check[i][0] = bob[i][0];
                    }
                    for(j = 0; j < m; j++)
                    {
                        check[0][j] = bob[0][j];
                    }
                    for(i = 1; i < n; i++)
                    {
                        for(j = 1; j < n; j++)
                        {
                            if(bob[i][j] == 1)
                            {
                                check[i][j] = min(check[i - 1][j - 1], min(check[i - 1][j], check[i][j - 1])) + 1;
                            }
                            else
                            {
                                check[i][j] = 0;
                            }
                        }
                    }

                    for(i = 0; i < n; i++)
                    {
                        for(j = 0; j < n; j++)
                        {
                            if(check[i][j] == k)
                            {
                                ans = 2;
                                break;
                            }
                        }
                        if(ans)break;
                    }

                    if(ans)break;
                }
                if(ans)break;
            }
            if(ans == 1)
            {
                cout << "Alice" << endl;
            }
            else if(ans == 2)
            {
                cout << "Bob" << endl;
            }
            else
            {
                cout << "Draw" << endl;
            }
        }
    }

return 0;
}



