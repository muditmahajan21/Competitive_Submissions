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
        ll i, j, k, n, x, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> x;
        map<ll, ll> m;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
        }
        
        for(auto itr: m)
        {
            if(x > 0)
            {
                if(x < itr.second)
                {
                    itr.second -= x;
                    x = 0;
                }
                else
                {
                    x -= (itr.second - 1);
                    itr.second = 1;
                }
                if(x <= 0)
                {
                    break;
                }
            }
        }

        if(x <= 0)
        {
            ans = m.size();
        }
        else
        {
            ans = m.size() - x;
        }

        cout << ans << endl;
    }

return 0;
}
