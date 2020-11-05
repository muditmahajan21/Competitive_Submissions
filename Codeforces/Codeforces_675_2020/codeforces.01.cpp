#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll a, b, c, d, sum = 0;
        cin >> a >> b >> c;

        sum += a + b + c;
        d = sum - 1;

        cout << d << endl;
    }
    return 0;
}