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
        cin >> n >> k;
        
        k--;

        if(n % 2)
        {
            temp = n / 2;
            i = k / temp;
            ans = (i + k) % n;
        }
        else
        {
            ans = k % n;
        }
        cout << ans + 1<< endl;
    }

return 0;
}

/*
5 4 3 2 1 5 4 3 2 1 5 4 3 2 1
1 2 4 5 2 3 5 1 3 4 1 2 4 5 2

3 2 1 3 2 1 3 2 1 3 2 1
1 3 2 1 3 2 1 3 2 



7 6 5 4 3 2 1 7 6 5 4 3 2 1 7 6 5 4 3 2 1 7 6 5 4 3 2 1 7
1 2 3 5 6 7 2 3 4 6 7 1 3 4 5 7 1 2 4 5 6 1 2 3 5 6 7 2 3 
*/


