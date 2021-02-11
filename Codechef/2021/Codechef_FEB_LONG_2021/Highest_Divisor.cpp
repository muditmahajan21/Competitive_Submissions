#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    
    for(i = 10; i > 0; i--)
    {
        if(n % i == 0)
        {
            cout << i << endl;
            break;
        }
    }
return 0;
}
