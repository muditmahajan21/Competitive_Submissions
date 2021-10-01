#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
const ll MOD = 1e9 + 7;

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
        
        ans = 1;

        for(i = 3; i <= 2 * n; i++)
        {
            ans = (ans * i) % MOD;
        }


        cout  << ans << endl;
    }

return 0;
}


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
        }

    }

return 0;
}
