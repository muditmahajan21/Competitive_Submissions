#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

ll sqr(ll n)
{
        return n * n;
}

int main()
{
        ll test;
        cin >> test;
        while(test--)
        {
                ll x, y;
                cin >> x >> y;
                ll n = 1;

                while(sqr(n) < x + y)
                {
                        n++;
                }
                if(sqr(n) != x + y)
                {
                        cout << "NO" << endl;
                }
                else
                {   
                        bool flag = true;
                        for(ll i = 1; i < n; i++)
                        {
                                if(sqr(i) + sqr(n - i) == x and 2 * i * (n - i) == y)
                                {
                                        cout << "YES" << endl;
                                        cout << n << endl;
                                        for(ll j = 1; j <= n - i; j++)
                                        {
                                                cout << 1 << " " << j + 1 << endl;
                                        }
                                        for(ll j = 2; j <= i; j++)
                                        {
                                                cout << 2 << " " << n - i + j << endl;
                                        }
                                        flag = false;
                                        break;
                                }
                        }
                        if(flag)
                        {
                                cout << "NO" << endl;
                        }
                }
        }
return 0;
}
