#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{   
    ll test;
    cin >> test;

    while(test--)
    {
        ll n;
        cin >> n;

        ll len, count, start;
        len = 1;
        count = 9;
        start = 1;

        while(n > len * count)
        {
            n -= len * count;
            count *= 10;
            start *= 10;
            len++;
        }

        start += (n - 1) / len;
        string res = to_string(start);
        ll ans =  res[(n - 1) % len] - '0';
        cout << ans << endl;
    }
return 0;
}