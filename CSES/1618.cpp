#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll n, ans = 0;
        cin >> n;
        while(n)
        {
                ans += n / 5;
                n /= 5;
        }
        cout << ans << endl;
}
