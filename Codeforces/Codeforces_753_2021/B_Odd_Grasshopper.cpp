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
        ll i, j, k, n, x, temp, count = 0, ans = 0, sum = 0;
        cin >> x >> n;
        vector<ll> dp;
        if(x % 2)
        {
            switch(n % 4)
            {
                case 0:
                    ans = x;
                    break;
                case 1:
                    ans = x + n;
                    break;
                case 2:
                    ans = x - 1;
                    break;
                case 3:
                    ans = x - n - 1;
                    break;
            }
        }
        else
        {
            switch(n % 4)
            {
                case 0:
                    ans = x;
                    break;
                case 1:
                    ans = x - n;
                    break;
                case 2:
                    ans = x + 1;
                    break;
                case 3:
                    ans = x + n + 1;
                    break;
            }
        }
        cout << ans << endl;
    }


return 0;
}

