#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;vector<ll> arr;
    cin >> test;
    while(test--)
    {
        ll sum = 0, i, j, k, n, m, temp, count = 0, ans = 0;
        cin >> n >> m;

        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];  
            sum += arr[i];
        }

        if(sum == m)
        {
            cout << "YES" << endl;
        }
        else    
            cout << "NO" << endl;
    }

return 0;
}
