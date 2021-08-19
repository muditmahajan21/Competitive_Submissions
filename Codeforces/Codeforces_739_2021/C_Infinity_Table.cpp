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
        temp = ceil((double)sqrt(n));

        if(temp * temp == n)
        {
            ans = temp;
            sum = 1;
        }
        else
        {
            k = sqrt(n);
            if(n - k * k <= temp)
            {
                ans = n - k * k;
                sum = temp;
            }
            else
            {
                ans = temp;
                sum = temp * temp + 1 - n;
            }
        }

        cout << ans << " " << sum << " " << endl;
    }

return 0;
}
