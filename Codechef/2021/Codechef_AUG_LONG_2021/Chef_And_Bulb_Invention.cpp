#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll test;
        cin >> test;
        while(test--)
        {
            ll i, j, k, n, p, ans = 0, sum = 0, temp;
            cin >> n >> p >> k;
            temp = p % k;
            
            ans = (n / k) * temp + p / k;
            temp = min(temp, n % k);
            ans += temp;
            cout << ans + 1 << endl;
        }
        
return 0;
}
