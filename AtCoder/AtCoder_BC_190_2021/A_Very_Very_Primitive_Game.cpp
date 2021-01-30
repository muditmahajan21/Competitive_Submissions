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
    cin >> n >> k >> j;
    
    if(j == 0)
    {
        if(n > k)
        {
            cout << "Takahashi" << endl;
        }
        else 
        {
            cout << "Aoki" << endl;
        }
    }
    else   
    {
        if(k > n)
        {
            cout << "Aoki" << endl;
        }
        else
        {
            cout << "Takahashi" << endl;
        }
    }

return 0;
}
