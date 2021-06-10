#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
        ll n, i, j, ans = 0;
        cin >> n;
        
        while(n)
        {
                i = n; j = 0;
                while(i)
                {
                        j = max(j, i % 10);
                        i /= 10;
                }
                n -= j;
                ans++;
        }

        cout << ans << endl;
return 0;
}
