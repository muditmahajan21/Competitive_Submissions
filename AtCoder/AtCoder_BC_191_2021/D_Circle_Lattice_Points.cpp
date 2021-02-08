#include<iostream>
#include<math.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ans = 0;

    long double x, y, r, p;
    cin >> x >> y >> r;

    int s, e, t, b;
    s = ceil(x - r);
    
    e = floor(x + r);

    for(int i = s; i <= e; i++)
    {
        p = sqrt(pow(r, 2) - pow((x - (double)i), 2));
        b = ceil(y - p);
        t = floor(y + p);
        ans += abs(t - b + 1);
    }

    cout << ans << endl;
return 0;
}
