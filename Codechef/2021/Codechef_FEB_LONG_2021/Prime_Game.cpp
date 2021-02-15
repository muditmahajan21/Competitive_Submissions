#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
#define MAX 1000000
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    bool prime[MAX + 1];
    memset(prime, true, sizeof(prime));
    
    for(ll p = 2; p * p <= MAX; p++)
    {
        if(prime[p])
        {
            for(ll i =p * 2; i <= MAX; i += p)
            {
                prime[i] = false;
            }
        }
    }

    vector<ll> primes;
    primes.push_back(2);

    for(ll i = 3; i < MAX; i += 2)
    {
        if(prime[i])
        {
            primes.push_back(i);
        }
    }        

    cin >> test;
    while(test--)
    {
        ll x, y, i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> x >> y;

        auto it = upper_bound(primes.begin(), primes.end(), x);

        if(it != primes.begin())
        {   
            --it;
            ans = it - primes.begin();
        }

        if(ans < y)
        {
            cout << "Chef" << endl;
        }
        else
        {
            cout << "Divyam" << endl;
        }
    }

return 0;
}
