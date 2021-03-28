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
        ll i, j, k, n, temp, cnt = 0, ans = 0, sum = 0;
        cin >> n >> k;
        string s;
        cin >> s;

        i = 0;
        while(i < n)
        {
            if(s[i] == '*')
            {
                j = i + 1;
                cnt = -1;
                while(j < n and j - i <= k)
                {
                    if(s[j] == '*')
                    {
                        cnt = j;
                    }
                    j++;
                }
                if(cnt == -1)
                {
                    break;
                }
                i = cnt;
                ans++;
                continue;
            }
            i++;
        }
        ans++;
        cout <<ans << endl;
    }
return 0;
}
