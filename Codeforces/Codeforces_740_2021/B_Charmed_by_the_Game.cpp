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
        ll a, b;
        cin >> a >> b;

        n = a + b;
        temp = abs(a - b);
        
        set<ll> s;
        if(n % 2)
        {
            for(i = 0; i <= min(a, b); i++)
            {
                s.insert(2 * i + (temp - 1) / 2);
                s.insert(2 * i + (temp + 1) / 2);
            }
        }
        else
        {
            for(i = 0; i <= min(a, b); i++)
            {
                s.insert(2 * i + temp / 2);
            }
        }

        cout << s.size() << endl;
        for(auto e: s)
        {
            cout << e << " ";
        }
        cout << endl;
    }

return 0;
}