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
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
            {
                j = i;
            }
            if(arr[i] == n)
            {
                k = i;
            }
        }

        temp = min(j, k);
        sum = max(j, k);

        ans = min(sum + 1, n - temp);
        ans = min(ans, n + 1 + temp - sum);

        cout <<ans << endl;
    }

return 0;
}
