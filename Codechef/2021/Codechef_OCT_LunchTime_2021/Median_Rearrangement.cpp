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
        cin >> n >> k;
        vector<vector<ll>> arr(n, vector<ll>(n));
        vector<ll> v;
        for(i = 0; i < n; i++)
        {   
            for(j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                v.push_back(arr[i][j]);
            }
        }

        vector<ll> t = v;
        sort(v.begin(), v.end());

        ans = v[((n * n) + 1) / 2];
        for(i = ((n * n) + 1) / 2, j = 0; j < n; j++, i++)
        {
            sum += v[i];
        }
        
        if(sum > k)
        {   
            count = 0;
            temp = ((n * n) + 1) / 2;
            temp -= (n - 1);

            bool flag = false;
            while(temp >= n - 1)
            {   
                count++;
                ans = v[temp];
                sum = 0;
                for(i = temp, j = 0; j < n; j++, i++)
                {   
                    sum += v[i];
                }

                if(sum <= k)
                {   
                    flag = true;
                    break;
                }
                else
                {
                    temp -= (n - 1);
                }
            }
            if(!flag)
            {
                ans = -1;
            }
        }
        cout << ans << endl;
    }

return 0;
}

/* Sieve for prime number */
