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
        
        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                temp = j - i;
                if(temp * 2 == n)
                {
                    cout << 0 << " ";
                }
                else if(temp * 2 < n)
                {
                    cout << 1 << " ";
                }
                else
                {
                    cout << -1 << " ";
                }
            }
        }

        cout << endl;
    }

return 0;
}