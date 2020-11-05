#include<bits/stdc++.h>
using namespace std;
# define ll long long int

ll rnd(ll a, ll b)
{   
    ll ans;
    if((a + b) %2 != 0)
    {
        ans = a + b + 1;
    }
    else 
    {
        ans = a + b;
    }

    return ans / 2;
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll n, prev;
        cin >> n;
        ll ans = 2;
        cout << ans << endl;

        for(int i = n; i >= 2; i--)
        {
            if(i == n)
            {
                prev = rnd(i, i - 1);
                cout << i << " " << i - 1 << endl;
            }
            else
            {

                cout << prev << " " << i - 1 << endl;
                prev = rnd(prev, i - 1);
            }
        }
    }
    return 0;
}