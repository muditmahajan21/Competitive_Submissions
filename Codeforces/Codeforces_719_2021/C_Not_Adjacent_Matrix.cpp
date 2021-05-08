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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;

        if(n == 1)
        {
            cout << 1 << endl;
        }
        else if(n == 2)
        {
            cout << -1 << endl;
        }        
        else
        {
            ll m = n * n;
            k = (m + 1) / 2;

            temp = 1;
            j = 0;
            for(i = 0; i < k; i++)
            {
                cout << temp << " ";
                temp += 2;
                j++;
                if(j == n)
                {
                    cout << endl;
                    j = 0;
                }
            }
            temp = 2;
            for(i = 0; i < m - k; i++)
            {   
                cout << temp << " ";
                temp += 2;
                j++;
                if(j == n)
                {
                    cout << endl;
                    j = 0;
                }
            }
        }
    }

return 0;
}


