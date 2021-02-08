#include "bits/stdc++.h"
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

        ll left_zero[n], right_one[n];

        for(i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
            left_zero[i] = count;
        }

        count = 0;
        for(i = n - 1; i >= 0; i--)
        {
            if(s[i] == '1')
            {
                count++;
            }
            right_one[i] = count;

            if(left_zero[i] + right_one[i] > ans)
            {
                ans = left_zero[i] + right_one[i];
            }
        }

        cout << n - ans << endl;
    }

return 0;
}
