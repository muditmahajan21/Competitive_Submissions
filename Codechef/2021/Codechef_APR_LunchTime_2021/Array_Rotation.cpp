
#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
   
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    ll arr[n];
    ll mod = 1e9 + 7;
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = (sum + arr[i] + mod) % mod;
    }
    
    ll q;
    cin >> q;
    while(q--)
    {
        cin >> k;
        sum = (sum * 2) % mod;
        cout << sum << endl;
        
    }

return 0;
}
