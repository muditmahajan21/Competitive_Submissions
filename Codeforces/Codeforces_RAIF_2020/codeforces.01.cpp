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
        ll a, b, x, y, ans = 0;
        cin >> a >> b >> x >> y;

        if(x == a)
        {
            ans = abs(y - b);
        }
        else if(y == b)
        {
            ans = abs(x - a);
        }
        else
        {
            ans = (abs(x - a)) + abs((y - b)) + 2;
        }

        cout << ans << endl;    
    }

return 0;
}