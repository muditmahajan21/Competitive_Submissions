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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        if(sum % k != 0)
        {
            ans++;
        }

        cout << ans << endl;
    }

return 0;
}
