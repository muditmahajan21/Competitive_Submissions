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
        ll i, j, k, x, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> x;
        bool flag = true;
    
        vector<pair<ll, ll>> arr;

        for(i = 0; i < n; i++)
        {
            cin >> temp; 
            arr.push_back({temp, 1});
        }

        for(i = 0 ; i < arr.size(); i++)
        {
            if(arr[i].first % x != 0)
            {
                break;
            }
            else  
            {
                temp = arr[i].first / x;
                arr.push_back({temp, x * arr[i].second});
            }
        }

        for(i = 0 ; i < arr.size(); i++)
        {
            temp = arr[i].first * arr[i].second;
            ans += temp;
        }

        cout << ans << endl;
    }

return 0;
}
