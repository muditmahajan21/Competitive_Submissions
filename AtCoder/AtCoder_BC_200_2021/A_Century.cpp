#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    ll n;
    cin >> n;
    ll ans;
    if(n % 100 == 0)
    {
        ans = n / 100;
    }
    else
    {
        ans = (n + 100) / 100;
    }
    cout << ans << endl;
return 0;
}
