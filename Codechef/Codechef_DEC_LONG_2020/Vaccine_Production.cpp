#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll d = 0, p, ans = 0, counter = 10000000;
    pair<ll, ll> d1, d2;
    cin >> d1.first >> d1.second >> d2.first >> d2.second >> p; 

    for(ans = 1; ans < counter; ans++)
    {
        if(d1.first <= ans)
        {
            d += d1.second;
        }
        if(d2.first <= ans)
        {
            d += d2.second;
        }
        if(d >= p)
        {
            break;
        }
    }
    cout << ans << endl;

return 0;
}
