#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{   
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--)
    {
        ll i, j, k, n, m;
        cin >> n >> m;
        if(m == 0 || (n % 2 == 0 and m <= n / 2))
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
return 0;
}