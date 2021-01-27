#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

bool isPowerOfTwo(ll n)
{
   if(n==0)
   return false;
 
   return (ceil(log2(n)) == floor(log2(n)));
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        
        if(n % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else 
        {
            if(isPowerOfTwo(n))
            {
                cout << "NO" << endl;
            }
            else  
            {
                cout << "YES" << endl;
            }
        }
    }

return 0;
}
