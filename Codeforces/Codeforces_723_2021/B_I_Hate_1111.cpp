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
        
        temp = n % 11;
        k = temp * 111;

        if(k <= n)
        {
            if((n - k) % 11 == 0)
            {
                cout << "YES" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }

return 0;
}
