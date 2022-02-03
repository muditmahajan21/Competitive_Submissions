#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n;
    cin >> n;
    ll ans = 0;
    while(n and n % 5 == 0)
    {
        n /= 5;
        ans++;
    }
    
    while(n and n % 2 == 0)
    {
        n /= 2;
        ans++;
    }
    if(n) ans++;
    cout << ans << endl;

return 0;
}
