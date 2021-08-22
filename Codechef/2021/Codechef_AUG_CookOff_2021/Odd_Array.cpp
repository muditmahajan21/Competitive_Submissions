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
        
        vector<ll> res;
        k = 1;
        while(res.size() < n)
        {
            temp = res.size();
            res.push_back(k++);
            for(i = 0; i < temp; i++)
            {
                res.push_back(res[i]);
            }
        }

        for(i = 0; i < n; i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
    }

return 0;
}
