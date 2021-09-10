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
        cin >> n;
        string s;
        cin >> s;

        for(i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                count++;
            }
        }
        sum = n - count;
        
        if(sum == 1 || sum == 2)
        {
            cout << "NO" << endl;
            continue;
        }
        char res[50][50];

        for(i = 0; i < n; i++)
        {   
            bool flag = true;
            bool flag2 = true;
            for(j = 0; j < n; j++)
            {
                if(i == j) 
                {
                    res[i][j] = 'X';
                }
                else
                {
                    if(i < j)
                    {
                        if(s[i] == '2' and s[j] == '2' and flag)
                        {
                            res[i][j] = '+';
                            res[j][i] = '-';
                            flag = false;
                        }
                        else
                        {   
                            if(s[i] == '2' and s[j] == '2' and !flag and flag2)
                            {
                                res[i][j] = '-';
                                res[j][i] = '+';
                                flag2 = false;
                            }
                            else
                            res[i][j] = '=';
                        }
                    }
                    else
                    {
                        if(res[j][i] == '+')
                        {
                            res[i][j] = '-';
                        }
                        else if(res[j][i] == '-')
                        {
                            res[i][j] = '+';
                        }
                        else if(res[j][i] == '=')
                        {
                            res[i][j] = '=';
                        }
                    }
                }
            }   
        }

        cout << "YES" << endl;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                cout << res[i][j];
            }
            cout << endl;
        }
        //cout << endl;
    }

return 0;
}
