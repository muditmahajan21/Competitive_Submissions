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
        ll a, b, c, m;
        cin >> a >> b >> c >> m;
        vector<ll> arr;

        ll max_pairs = (a - 1) + (b - 1) + (c - 1);
        arr.emplace_back(a);
        arr.emplace_back(b);
        arr.emplace_back(c);
        sort(arr.begin(), arr.end(), greater<ll>());

        ll min_pairs = arr[0] - (arr[1] + arr[2]) - 1;

        if(m > max_pairs || m < min_pairs)
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