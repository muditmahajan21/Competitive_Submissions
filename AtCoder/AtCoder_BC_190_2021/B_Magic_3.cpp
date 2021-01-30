#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
        ll i, j, k, s, d, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> s >> d;

        while(n--)
        {
            cin >> i >> j;
            if(i < s && j > d)
            {
                ans = 1;
            }
        }

        if(ans == 1)
        {
            cout << "Yes" << endl;
        }
        else 
        {
            cout << "No" << endl;
        }
    

return 0;
}
