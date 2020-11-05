#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

ll min(ll a, ll b)
{
    if(a < b)
        return a;
    return b;
}

ll cost(ll arr[], ll target, ll n, ll w, ll ans)
{
    ll sum = 0;

    for(ll i = 0; i < w; i++)
    {
        ll t = 0;
        if(arr[i] > target)
        {
            t = abs(n - arr[i] + target);
        }
        else  
        {
            t = abs(n - target + arr[i]);
        }

        ll temp = min(abs(target - arr[i]), t);
        sum += temp;

        if(sum > ans) 
        {
            return ans;
        }
    }
    return sum;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll t = 0; t < test; t++)
    {       
        ll sum = 0, temp, ans = MAX, w, n, i, optimal;
        cin >> w >> n;

        ll arr[w];

        for(i = 0; i < w; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < w; i++)
        {
            ans = min(ans, cost(arr, arr[i], n, w, ans));
        }

        cout << "Case #" << t + 1 << ": " << ans << endl;
    }

return 0;
}
