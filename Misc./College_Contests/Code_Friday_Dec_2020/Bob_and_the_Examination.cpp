#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k;

        if(n % 2 != 0)
        {
            n++;
        }

        temp = n / 2;

        if(k <= temp)
        {
            ans = 2 * k - 1;
        }
        else  
        {
            ans = 2 * (k - temp);
        }

        cout << ans << endl;

return 0;
}
