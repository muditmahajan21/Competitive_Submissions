#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll n, i;
        cin >> n;
        ll arr[n];
        ll total = 0, ans, temp, temp_ans;

        for (i = 0; i < n; i++)
        {
                cin >> arr[i];
                total += arr[i];
        }        
        
        ans = LONG_LONG_MAX;

        for(i = 0; i < (1 << n); i++)
        {
                temp = 0;
                for(ll j = 0; j < n; j++)
                {
                        if(i & (1 << j))
                        {
                                temp += arr[j];
                        }
                }
                temp_ans = abs((total - temp) - temp);
                ans = min(ans, temp_ans);
        }

        cout << ans << endl;
return 0;
}
