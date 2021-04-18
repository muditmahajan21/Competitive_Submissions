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
        ll r, i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> r;
        ll a[n], b[n];

        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        ll current_tension, max_tension;
        current_tension = max_tension = b[0];

        for(i = 1; i < n; i++)
        {
            current_tension -= ((a[i] - a[i - 1]) * r);
            current_tension =  max((ll)0, current_tension) + b[i];
            max_tension = max(current_tension, max_tension);
        }
        
        cout << max_tension << endl;
    }

return 0;
}
