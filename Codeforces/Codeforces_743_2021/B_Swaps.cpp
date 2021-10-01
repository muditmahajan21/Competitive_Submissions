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
        cin >> n;
        ll a[n], b[n], ca[n], cb[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
            ca[i] = a[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> b[i];
            cb[i] = b[i];
        }

        temp = a[0];
        sum = b[0];

        for(i = 0; i < n; i++)
        {
            if(b[i] > temp)
            {
                temp = i;
                break;;
            }
        }

        for(i = 0; i < n; i++)
        {
            if(a[i] < sum)
            {
                sum = i;
                break;
            }
        }

        ans = min(sum, temp);
        cout << ans << endl;
    }

return 0;
}
