#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;
#define MAX 1000000 

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

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
    
    int res[1000001];
    memset(res, 0, sizeof(res));
    
    for(int i = 5; i <= 1000000; i++)
    {
        if(prime[i] && prime[i - 2])
        {
            res[i]++;
        } 
        res[i] += res[i - 1];
    }
    
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
          
        if(n <= 4)
        {
            cout << 0 << endl;
            continue;
        }

        else   
        {
            cout << res[n] << endl;
        }   
    }

return 0;
}
