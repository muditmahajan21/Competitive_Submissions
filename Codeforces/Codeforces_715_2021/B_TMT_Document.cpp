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
            
        ll count_first_t = 0, count_last_t = 0, count_first_m = 0, count_last_m = 0;
        for(i = n - 1; i >= 0; i--)
        {
            if(s[i] == 'T')
            {
                count_last_t++;
            }
            else if(s[i] == 'M')
            {
                count_last_m++;
            }
            if(count_last_m > count_last_t)
            {
                break;
            }
        }
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'T')
            {
                count_first_t++;
            }
            else if(s[i] == 'M')
            {
                count_first_m++;
            }
            if(count_first_m > count_first_t)
            {
                break;
            }
        }

        if((count_last_t - count_last_m) == n / 3 and (count_first_t - count_first_m) == n / 3)
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
