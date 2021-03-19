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
        ll arr[n];
        map<ll, ll> c;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            c[arr[i] % k]++;
        }
        
        temp = (c[0] > 0);

        ll a, b;

        for(i = 1, j = k - 1; i <= j; i++, j--)
        {
            if(i == j && c[i])
            {
                temp++;
                continue;
            }
            if(c[i] && c[j])
            {
                a = min(c[i], c[j]);
                b = max(c[j], c[i]);
                temp++;
                if(b - a > 1)
                {
                    temp += b - a - 1;
                }
            }
            else
            {
                temp += c[i] + c[j];
            }
        }

        cout << temp << endl;
    }

return 0;
}
