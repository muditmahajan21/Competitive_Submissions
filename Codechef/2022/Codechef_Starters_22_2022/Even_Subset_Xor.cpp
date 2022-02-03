#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<ll> final;
    for(ll i = 1; i <= 2000; i++)
    {
        ll c = 0;
        ll t = i;
        while(t)
        {
            c += t & 1;
            t >>= 1;
        }
        if(c % 2 == 0)final.push_back(i);
    }

    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        for(i = 0; i < n; i++) cout << final[i] << " ";
        cout << endl;
    }

return 0;
}
