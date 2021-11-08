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
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        string s;
        cin >> s;

        vector<ll> b, r;

        for(i = 0; i < n; i++)
        {
            if(s[i] == 'B')
            {
                b.push_back(arr[i]);
            }
            else
            {
                r.push_back(arr[i]);
            }
        }

        sort(b.begin(), b.end());
        sort(r.begin(), r.end());
        bool flag = false;
    
        for(i = 0; i < n; i++)
        {
            j = i + 1;
            ll bn = b.size();
            ll rn = r.size();

            flag = false;
            if(bn)
            {
                temp = *b.begin();
                if(j <= temp)
                {
                    b.erase(b.begin());
                    flag = true;
                }
            }
            if(!flag and rn)
            {
                temp = *r.begin();
                if(j >= temp)
                {
                    r.erase(r.begin());
                    flag = true;
                }
            }

            if(!flag)
            {
                ans = 1;
                break;
            }
        }

        if(ans)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

return 0;
}
