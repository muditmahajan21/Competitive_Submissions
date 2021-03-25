#include "bits/stdc++.h"
#define ll long long int
#define endl "\r"
const ll MOD = 1e9 + 7;
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, temp = 0, count = 0, ans = 0, sum = 0;
        ll r, c;
        cin >> r >> c;
        
        ll arr[r][c];
        for(i = 0; i < r; i++)
        {   
            for(j = 0; j < c; j++)
            {
                cin >> arr[i][j];
            }
        }

        ll up[r][c], down[r][c], left[r][c], right[r][c];
        for(i = 0; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                up[i][j] = 0;
                down[i][j] = 0;
                left[i][j] = 0;
                right[i][j] = 0;
            }
        }

        for(j = 0; j < c; j++)
        {
            up[0][j] = arr[0][j];
            down[r - 1][j] = arr[r - 1][j];
        }

        for(i = 1; i < r; i++)
        {
            for(j = 0; j < c; j++)
            {
                if(arr[i][j] == 1)
                {
                    up[i][j] = up[i - 1][j] + 1;
                }
            }
        }

        for(i = r - 2; i >= 0; i--)
        {
            for(j = 0; j < c; j++)
            {
                if(arr[i][j] == 1)
                {
                    down[i][j] = down[i + 1][j] + 1;
                }
            }
        }

        for(i = 0; i < r; i++)
        {
            left[i][0] = arr[i][0];
            right[i][c - 1] = arr[i][c - 1];
        }

        for(j = 1; j < c; j++)
        {
            for(i = 0; i < r; i++)
            {
                if(arr[i][j] == 1)
                {
                    left[i][j] = left[i][j - 1] + 1;
                    if(left[i][j] >= 2)
                    {
                        if(up[i][j] >= 2)
                        {
                            for(temp = 2; temp <= left[i][j]; temp++)
                            {
                                if(2 * temp <= up[i][j])
                                {
                                    ans++;
                                }
                            }
                            for(temp = 2; temp <= up[i][j]; temp++)
                            {
                                if(2 * temp <= left[i][j])
                                {
                                    ans++;
                                }
                            }
                        }
                        if(down[i][j] >= 2)
                        {
                            for(temp = 2; temp <= left[i][j]; temp++)
                            {
                                if(2 * temp <= down[i][j])
                                {
                                    ans++;
                                }
                            }
                            for(temp = 2; temp <= down[i][j]; temp++)
                            {
                                if(2 * temp <= left[i][j])
                                {
                                    ans++;
                                }
                            }
                        }
                    }
                }
            }
        }

        for(j = c - 2; j >= 0; j--)
        {
            for(i = 0; i < r; i++)
            {
                if(arr[i][j] == 1)
                {
                    right[i][j] = right[i][j + 1] + 1;

                    if(right[i][j] >= 2)
                    {   
                        if(up[i][j] >= 2)
                        {
                            for(temp = 2; temp <= right[i][j]; temp++)
                            {
                                if(2 * temp <= up[i][j])
                                {
                                    ans++;
                                }
                            }
                            for(temp = 2; temp <= up[i][j]; temp++)
                            {
                                if(2 * temp <= right[i][j])
                                {
                                    ans++;
                                }
                            }
                        }
                        if(down[i][j] >= 2)
                        {
                            for(temp = 2; temp <= right[i][j]; temp++)
                            {
                                if(2 * temp <= down[i][j])
                                {
                                    ans++;
                                }
                            }
                            for(temp = 2; temp <= down[i][j]; temp++)
                            {
                                if(2 * temp <= right[i][j])
                                {
                                    ans++;
                                }
                            }
                        }
                    }
                }
            }
        }

        cout << "Case #" << test_case << ": " << ans << "\n";
    }
return 0;
}