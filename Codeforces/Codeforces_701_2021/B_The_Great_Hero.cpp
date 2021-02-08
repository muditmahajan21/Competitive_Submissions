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
        ll A, B;
        cin >> A >> B >> n;
        bool flag = false;
        vector<pair<ll, ll>> monster(n);

        for(i = 0; i < n; i++)
        {
            cin >> monster[i].first;
        }
        for(i = 0; i < n; i++)
        {
            cin >> monster[i].second;
        }

        sort(monster.begin(), monster.end(), greater<ll>());
        
        for(i = 0; i < n - 1; i++)
        {
            temp = (monster[i].second + A - 1) / A;
            B -= temp * monster[i].first;
            if(B <= 0)
            {   
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "NO" << endl;
        }
        else 
        {
            temp = (monster[n - 1].second + A - 1) / A;
            for(i = 0; i < temp; i++)
            {
                B -= monster[n - 1].first;
                ans++;
                if(B <= 0)
                {
                    break;
                }
            }
            if(ans < temp)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

return 0;
}
