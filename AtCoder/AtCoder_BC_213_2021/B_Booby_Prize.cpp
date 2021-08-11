#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;

    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    vector<pair<ll, ll>> arr;

    for(i = 0; i < n; i++)
    {
        cin >> temp;
        arr.push_back( {temp, i + 1} );
    }

    sort(arr.begin(), arr.end());
    ans = arr[n - 2].second;
    cout << ans << endl;

return 0;
}
