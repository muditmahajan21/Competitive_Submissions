#include <bits/stdc++.h>
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
        ll i, j, k, n, temp, count = 0, sum = 0;
        cin >> n;

        if(n % 2 == 0)
        {
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {
                    cout << -1 << " ";
                }
                cout << endl;
            }
        }
        
        else
        {
            for(i = 0; i < n; i++)
            {
                for(j = 0; j < n; j++)
                {   
                    if(i == j)
                    {
                        cout << -1 << " ";
                    }
                    else
                    cout << 1 << " ";
                }
                cout << endl;
            }
        }
    }

return 0;
}
