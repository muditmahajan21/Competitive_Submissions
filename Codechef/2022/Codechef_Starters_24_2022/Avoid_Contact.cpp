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
        cin >> n >> k;
        ans = n;
        if(k <= 2)
        {
            ans += k * 2;
        }
        else 
        {   
            if(n != k)
            ans += k;
            else 
            ans += 
        }
        cout << ans << endl;
    }

return 0;
}

