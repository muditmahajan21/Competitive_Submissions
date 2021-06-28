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
        
        if(n % 2 == 0)
        {
            for(i = 2; i <= n; i+=2)
            {
                cout << i << " " << i - 1 << " ";
            }
        }
        else
        {
            for(i = 2; i <= n - 3; i+=2)
            {
                cout << i  << " " << i - 1 << " ";
            }
            cout << n << " ";
            cout << n - 2 << " " << n - 1;
        }
        cout << endl;
    }

return 0;
}
