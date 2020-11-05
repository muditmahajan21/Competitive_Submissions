#include<bits/stdc++.h>
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
        ll i, j, k, n, temp, count = 0, ans = 0;
        cin >> n;

        for(i = 0; i < n - 1; i++)
        {
            for(k = 0; k < i; k++)
            {
                cout << "0 ";
            }
            cout << "1 1 ";
            for(j = 0; j < (n - i - 2) ; j++)
            {
                cout << "0 ";
            }
            cout << endl;
        }
        cout << "1 ";

        for(i = 0; i < n - 2; i++)
        {
            cout << "0 ";
        }

        cout << "1" <<endl;
    }

return 0;
}
