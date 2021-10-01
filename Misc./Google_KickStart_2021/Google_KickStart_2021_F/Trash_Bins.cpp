#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
using namespace std;

void output_array(ll arr[], ll n)
{
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        ll res[n], left[n], right[n];

        for(i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                res[i] = 0;
                left[i] = 0;
                right[i] = 0;
            }
            else
            {
                res[i] = -1;
                left[i] = -1;
                right[i] = -1;
            }
        }

        temp = 0;
        for(i = 0; i < n; i++)
        {
            if(res[i] == 0)
            {
                temp = 0;
            }
            else
            {   
                temp++;
                left[i] = temp;
            }
        }
        temp = 0;
        for(i = n - 1; i >= 0; i--)
        {
            if(res[i] == 0)
            {
                temp = 0;
            }
            else
            {   
                temp++;
                right[i] = temp;
            }
        }

        for(i = 0; i < n; i++)
        {
            if(res[i] == 0)
            {
                temp = i;
                break;
            }
        }

        for(i = n - 1; i >= 0; i--)
        {
            if(res[i] == 0)
            {
                sum = i;
                break;
            }
        }

        for(i = 0; i < n; i++)
        {
            if(res[i] != 0)
            {      
                if(i <= temp)
                {
                    res[i] = left[i];
                }
                else if(i >= sum)
                {
                    res[i] = right[i];
                }
                else
                {
                    res[i] = min(left[i], right[i]);
                }
            }
        }

        ans = accumulate(res, res + n, ans);

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}