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
        vector<vector<ll>> arr;
        vector<bool> read(n, false);
        bool flag = false;

        for(i = 0; i < n; i++)
        {
            cin >> k;
            if(k == 0)
            {
                flag = true;
                read[k] = true;
            }
            vector<ll> t;
            for(j = 0; j < k; j++)
            {
                cin >> temp;
                t.push_back(temp);
            }
            arr.push_back(t);
        }

        if(!flag)
        {
            cout << -1 << endl;
        }
        else
        {   
            while(true)
            {
                for(i = 0; i < n; i++)
                {   
                    flag = true;
                    for(j = 0; j < arr[i].size(); j++)
                    {
                        if(!read[arr[i][j] - 1])
                        {
                            flag = false;
                            break;
                        }
                    }
                    if(flag)
                    {
                        read[k] = true;
                    }
                }
                ans++;
                flag = true;
                for(i = 0; i < n; i++)
                {
                    if(!read[i])
                    {
                        flag = false;
                    }
                }
                if(flag)
                {
                    break;
                }
            }
            cout << ans << endl;
        }
    }

return 0;
}
