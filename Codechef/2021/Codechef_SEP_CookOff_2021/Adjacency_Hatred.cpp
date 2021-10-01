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
        vector<ll> even;
        vector<ll> odd;
        
        for(i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp % 2)
            {
                odd.emplace_back(temp);
            }
            else
            {
                even.emplace_back(temp);
            }
        }

        k = odd.size();
        ll m = even.size();

        if(k == n || m == n)
        {
            cout << -1 << endl;
        }
        else
        {
            for(auto e: odd)
            {
                cout << e << " ";
            }
            for(auto e: even)
            {
                cout << e << " ";
            }
        }

        cout << endl;
    }

return 0;
}
