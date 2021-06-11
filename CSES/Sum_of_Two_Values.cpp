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
    cin >> n >> k;

    map<ll, ll> m;
    ll arr[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] < k)
        {
            temp = k - arr[i];
            
            if(m.find(temp) != m.end())
            {
                j = m.find(temp) -> second;
                cout << j + 1 << " " << i  + 1 << endl;
                ans = 1;
                break;
            }
        }
        m[arr[i]] = i;
    }

    if(!ans)
    {
        cout << "IMPOSSIBLE" << endl;
    }

return 0;
}
