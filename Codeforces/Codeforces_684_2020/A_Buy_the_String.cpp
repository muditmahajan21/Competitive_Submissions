#include<bits/stdc++.h>
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
        ll c0 ,c1, h, i, j, k, n, temp, count0 = 0, count1 = 0, ans = 0;
        string str;

        cin >> n >> c0 >> c1 >> h;
        cin >> str;

        for(i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                count0++;
            }
            else  
            {
                count1++;
            }
        }

        ans = count0 * c0 + count1 * c1;

        temp = count1 * h + (count0 + count1) * c0;
        ans = min(temp, ans);

        temp = count0 * h + (count0 + count1) * c1;
        ans = min(temp, ans);

        cout << ans << endl;
    }

return 0;
}
