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
        ll i, j, k, n, temp, x, count = 0, ans = 0, sum = 0;
        cin >> n >> k >> x;
        ll arr[n];
        
        vector<ll> res;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            res.push_back(arr[i]);
        }
        
        sort(res.begin(), res.end(), greater<ll>());
        for(i = 0; i < res.size(); i++)
        {
            if(k)
            {
                if(i + 1 < res.size())
                {   
                    if(res[i] + res[i + 1] >= x)
                    {
                        ans += x;
                        i++;
                        k--;
                    }
                    else
                    {
                        ans += res[i];
                    }
                }
                else
                {
                    ans += res[i];
                }
            }
            else
            {
                ans += res[i];
            }
        }
        cout << ans << endl;
    }

return 0;
}


