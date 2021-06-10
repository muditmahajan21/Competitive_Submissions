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
        ll i, j, k, n, temp, count = 0, ans = 1, sum = 0;
        string s;
        cin >> s;

        n = s.size();
        ll zero[n], one[n];
        memset(zero, -1, sizeof(zero));
        memset(one, -1, sizeof(one));
        ll arr[n];

        for(i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                zero[i] = i;
            }
            else if(i > 1)
            {
                zero[i] = zero[i-1];
            }

            if(s[i] == '1')
            {
                one[i] = i;
            }
            else if(i > 1)
            {
                one[i] = one[i-1];
            }
        }

        for(i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                arr[i] = 0;
            }
            else if(s[i] == '1')
            {
                arr[i] = 1;
            }
            else
            {
                arr[i] = -1;
            }
        }

        ll answer[n];
        answer[0] = 1;

        for(i = 1; i < n; i++)
        {
            if(arr[i] == -1)
            {
                answer[i] = answer[i - 1];
            }
            else
            {
                j = i - 1;
                if(zero[j] == -1 and one[j] == -1)
                {
                    answer[i] = 0;
                }
                else
                {
                    if(zero[j] > one[j])
                    {
                        if(zero[j] % 2 == i % 2)
                        {
                            if(arr[i])
                            {
                                answer[i] = zero[j] + 1;
                            }
                            else
                            {
                                answer[i] = answer[zero[j]];
                            }
                        }
                        else
                        {
                            if(arr[i])
                            {
                                answer[i] = answer[zero[j]];
                            }
                            else
                            {
                                answer[i] = zero[j] + 1;
                            }
                        }
                    }
                    else
                    {
                        if(one[j] % 2 == i % 2)
                        {
                            if(arr[i])
                            {
                                answer[i] = answer[one[j]];
                            }
                            else
                            {
                                answer[i] = one[j] + 1;
                            }
                        }
                        else
                        {
                            if(arr[i])
                            {
                                answer[i] = one[j] + 1;
                            }
                            else
                            {
                                answer[i] = answer[one[j]];
                            }
                        }
                    }
                }
            }
            ans += (i - answer[i]);
            cerr << answer[i] << " ";
        }
        cerr << endl;

        cout << ans + n - 1 << endl;
    }

return 0;
}
