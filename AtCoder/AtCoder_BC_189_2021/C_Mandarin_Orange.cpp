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
    cin >> n;
    ll arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for(i = 0; i < n; i++)
    {
        temp = arr[i];   
        for(j = i; j < n; j++) 
        {
            if(temp > arr[j]) 
            {
                temp = arr[j];
            }
            ans = max(ans, temp * (j - i + 1));
        }
    }

    cout << ans << endl;

return 0;
}
