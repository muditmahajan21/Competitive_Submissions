#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool isPowerOfTwo (ll x) 
{ 
    return x && (!(x&(x-1))); 
} 

ll nextPowerOf2(ll n)
{
    ll p = 1;
    if (n && !(n & (n - 1)))
        return n;
 
    while (p < n)
        p <<= 1;
     
    return p;
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
        temp = log2(n);
        cerr << temp << endl;
        temp = pow(2, temp + 1) - 1;
        cerr << temp << endl;
        
        if(temp == n)
        {
            cout << 1 << "\n" << temp << endl;
        }
        else
        {
            cout << 2 << "\n" << temp - n << " " << temp << endl;
        }
    }

return 0;
}
