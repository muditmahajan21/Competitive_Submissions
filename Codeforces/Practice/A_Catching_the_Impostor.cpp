#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> k >> n;
        ll arr[n];
        unordered_set<ll> s;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            s.insert(arr[i]);
        }

        temp = s.size();

        if(k - temp == 1)
        {
            cout << "YES" << endl;
        }
        else  
        {
            cout << "NO" << endl;
        }
    

return 0;
}
