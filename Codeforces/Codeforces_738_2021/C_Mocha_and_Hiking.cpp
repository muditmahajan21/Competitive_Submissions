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
        ll arr[n];
        vector<ll> res;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if(arr[n - 1] == 0)
        {
            for(i = 1; i <= n + 1; i++)
            {
                res.push_back(i);
            }
        }
        else if(arr[0] == 1)
        {
            res.push_back(n + 1);
            for(i = 1; i <= n; i++)
            {
                res.push_back(i);
            }
        }
        else
        {
            temp = -1;

            for(i = 1; i < n; i++)
            {
                if(arr[i - 1] == 0 and arr[i] == 1)
                {
                    temp = i;
                    break;
                }
            }

            if(temp > -1)
            {
                for(i = 1; i <= temp; i++)
                {
                    res.push_back(i);
                }
                res.push_back(n + 1);
                temp++;
                for(i = temp; i <= n; i++)
                {
                    res.push_back(i);
                }
            }
        }

        if(res.size() == 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for(auto e: res)
            {
                cout << e << " ";
            }
            cout << endl;
        }
    }

return 0;
}
