#include "bits/stdc++.h"
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
        cin >> n;
        ll arr[n];
        
        if(n % 2020 == 0)
        {
            cout << "YES" << endl;
        }
        else if(n % 2021 == 0)
        {
            cout << "YES" << endl;
        }
        else 
        {
            j = n / 2020;
            n = n - 2020 * j;
            //cout << i << " " << j << endl;
            if(n <= j)
            {
                cout << "YES" << endl;
            }
            else  
            {
                cout << "NO" << endl;
            }
        }
    }

return 0;
}
