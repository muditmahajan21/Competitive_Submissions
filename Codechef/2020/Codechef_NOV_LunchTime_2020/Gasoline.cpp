#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
#define MAX 1000000000

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, index, left;
        cin >> n;
        
        vector<pair<ll,ll>> arr(n);

        for(i = 0; i < n; i++)
        {
            cin >> arr[i].second;
        }
        for(i = 0; i < n; i++)
        {
            cin >> arr[i].first;
        }

        sort(arr.begin(), arr.end());

        left = n;

        for(i = 0; i < n; i++)
        {
            if (arr[i].second >= left)
            {
                ans += arr[i].first * left;
                left = 0;
            }
            else  
            {
                ans += arr[i].second * arr[i].first;
                left -= arr[i].second;
            }
            if(left <= 0)
            {
                break;
            }
        }

        cout << ans << endl;
    }

return 0;
}
