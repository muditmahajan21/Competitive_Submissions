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
            cout << "()" << endl;
        }
        else if(n == 2)
        {
            cout << "()()\n(())" << endl;
        }
        else
        {
            for(i = 0; i < n; i++)
            {
                cout << "()";
            }
            cout << endl;
            for(i = 0; i < n; i++)
            {
                cout << "(";
            }
            for(i = 0; i < n; i++)
            {
                cout << ")";
            }
            cout << endl;

            for(i = n - 2; i >= 1; i--)
            {
                for(j = 0; j < i; j++)
                {
                    cout << "()";
                }
                for(j = 0; j < (n - i); j++)
                {
                    cout << "(";
                }
                for(j = 0; j < (n - i); j++)
                {
                    cout << ")";
                }
                cout << endl;
            }
            
        }
    }

return 0;
}
