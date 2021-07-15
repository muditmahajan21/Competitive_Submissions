#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
using namespace std;

void output_array(ll arr[], ll n)
{
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 0;
        n = 3;
        ll arr[n][n];
        
        cin >> arr[0][0] >> arr[0][1] >> arr[0][2] >> arr[1][0] >> arr[1][2] >> arr[2][0] >> arr[2][1] >> arr[2][2];

        if(arr[0][2] + arr[0][0] == arr[0][1] * 2)ans++;
        if(arr[2][0] + arr[0][0] == arr[1][0] * 2)ans++;
        if(arr[2][2] + arr[0][2] == arr[1][2] * 2)ans++;
        if(arr[2][2] + arr[2][0] == arr[2][1] * 2)ans++;

        unordered_map<ll, ll>mp;
        temp = arr[0][0] + arr[2][2];
        if(temp % 2 == 0)
        {
            temp /= 2;
            mp[temp] += 1;
        }
        temp = arr[0][2] + arr[2][0];
        if(temp % 2 == 0)
        {
            temp /= 2;
            mp[temp] += 1;
        }
        temp = arr[0][1] + arr[2][1];
        if(temp % 2 == 0)
        {
            temp /= 2;
            mp[temp] += 1;
        }
        temp = arr[1][0] + arr[1][2];
        if(temp % 2 == 0)
        {
            temp /= 2;
            mp[temp] += 1;
        }

        for(auto e: mp)
        {
            sum = max(sum, e.second);
        }
        ans += sum;

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}