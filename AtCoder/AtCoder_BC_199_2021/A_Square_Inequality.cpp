#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    ll a, b, c;
    cin >> a >> b >> c;

    if(a * a + b * b < c * c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }

return 0;
}
