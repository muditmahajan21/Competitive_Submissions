#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll ans, l, r, i;
        cin >> l >> r;

        if ((r - l) == (r % l))
        {
            ans = r;
        }
        else 
        {
            ans = -1;
        }

        cout << ans << endl;
    }

return 0;
}
