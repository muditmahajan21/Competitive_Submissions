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
        ll i, j, k, n, m, temp, count = 0, ans = 0, sum = 0, neg = 0, pos = 0;
        cin >> n;
        if(n == 1)
        {
            cin >> m;
            ll arr[m];
        
            for(i = 0; i < m; i++)
            {
                cin >> arr[i];
                if(arr[i] >= 0)
                {
                    pos++;
                }
                else  
                {
                    neg++;
                }
            }

            if(neg == m || pos == m)
            {
                cout << 0 << endl;
                continue;
            }
            else  
            {
                while(neg > 0 && pos > 0)
                {
                    ans += neg + pos;
                    ans--;
                    pos--;
                    neg--;
                }
                cout << ans << endl;
            }
        }
        else  
        {
            while(n--)
            {
                cin >> m;
                ll arr[m];

                for(i = 0; i < m; i++)
                {
                    cin >> arr[i];
                    if(arr[i] >= 0)
                    {
                        pos++;
                    }
                    else  
                    {
                        neg++;
                    }
                }  
                if(neg == m || pos == m)
                {
                    continue;
                }
                else  
                {   
                    ans = 0;
                    while(neg > 0 && pos > 0)
                    {
                        ans += neg + pos;
                        pos--;
                        neg--;
                    }
                    sum += ans;
                } 
            }
            cout << sum << endl;
        }
    }

return 0;
}
