#include<bits/stdc++.h>
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
        ll i, j, k, n, temp, count = 0, ans = 0;
        cin >> n;

        ans = n * 4;

        for(i = 0; i < n; i++)
        {
            cout << ans << " ";
            ans -= 2;
        }

        cout << endl;
    }

return 0;
}
