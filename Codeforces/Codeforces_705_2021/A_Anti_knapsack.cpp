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
        vector<ll> res;
        
        for(i = k + 1; i <= n; i++)
        {
            res.push_back(i);
        }

        
        for(i = k - 1,j = 0; j < k / 2; i--, j++)
        {
            res.push_back(i);
        }

        cout << res.size() << endl;
        for(i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        if(res.size() != 0)
        cout << endl;
    }

return 0;
}
