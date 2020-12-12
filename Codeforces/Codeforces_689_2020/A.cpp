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
        cin >> n >> k;

        for(i = 0; i < k; i++)
        {
            cout << 'a';
        }

        i = k;
        while(i < n)
        {
            cout << 'b';
            i++;
            if(i < n)
            {
                cout << 'c';
                i++;
            }
            if(i < n)
            {
                cout << 'a';
                i++;
            }
        }

        cout << endl;
    }

return 0;
}
