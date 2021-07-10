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
        ll m, i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> k >> n >> m;
        ll a[n], b[m];
        
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        vector<ll> res;
        i = 0, j = 0;
        while(i < n and j < m)
        {   
            
            if(a[i] == 0)
            {   
                res.push_back(a[i]);
                k++;
                i++; 
                
            }
            else if(b[j] == 0)
            {   
                res.push_back(b[j]);
                k++;
                j++;
                
            }
            else
            {
                if(a[i] <= b[j] and a[i] <= k)
                {   
                    res.push_back(a[i]);
                    i++;
                }
                else if(b[j] <= a[i] and b[j] <= k)
                {   
                    res.push_back(b[j]);
                    j++;  
                }
                else
                {
                    ans = 1;
                    break;
                }
            }
        }

        while(i < n)
        {
            if(a[i] == 0)
            {   
                res.push_back(a[i]);
                i++;
                k++;
            }
            else
            {
                if(a[i] > k)
                {
                    ans = 1;
                    break;
                }
                else
                {   
                    res.push_back(a[i]);
                    i++;
                }
            }
        }

        while(j < m)
        {
            if(b[j] == 0)
            {   
                res.push_back(b[j]);
                j++;
                k++;
            }
            else
            {
                if(b[j] > k)
                {
                    ans = 1;
                    break;
                }
                else
                {   
                    res.push_back(b[j]);
                    j++;
                }
            }
        }

        if(ans)
        {
            cout << -1 << endl;
        }
        else
        {
            for(auto e: res)cout << e << " ";
            cout << endl;
        }
    }

return 0;
}
