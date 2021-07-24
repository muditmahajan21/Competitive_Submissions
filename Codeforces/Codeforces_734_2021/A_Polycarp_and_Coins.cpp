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
        if(n % 3 == 0)
        {
            j = n / 3;
            k = n / 3;
        }
        else if(n % 3 == 1)
        {
            j = (n + 3) / 3;
            k = n / 3;
        }
        else
        {
            j = n / 3;
            k = (n + 3) / 3;
        }
        cout << j << " " << k << endl;
    }

return 0;
}
