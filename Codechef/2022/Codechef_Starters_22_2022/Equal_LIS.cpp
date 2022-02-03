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
        if(n == 2) cout << "NO";
        else 
        {       
            cout << "YES" << endl;
            temp = n / 2;
            if(n % 2)
            {
                for(i = temp + 1; i < n; i++)
                {
                    cout << i << " ";
                }
                cout << n << " ";
                for(i = temp; i > 0; i--)
                {
                    cout << i << " ";
                }
            }
            else
            {
                for(i = temp + 1; i <= n; i++)
                {
                    cout << i << " ";
                }
                for(i = temp - 1; i > 0; i--)
                {
                    cout << i << " ";
                }
                cout << temp << " ";
            }
        }
        cout << endl;
    }

return 0;
}
