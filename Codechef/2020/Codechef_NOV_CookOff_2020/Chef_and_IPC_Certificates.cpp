#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll i, n, m, k, count = 0, ans = 0;
    cin >> n >> m >> k;

    for(i = 0; i < n ; i++)
    {   
        ll q, j, temp = 0;
        ll arr[n]; 
        
        for(j = 0; j < n; j++)
        {
            cin >> arr[j];
            temp += arr[j];
        }
        cin >> q;

        if(temp >= m && q <= 10)
        {
            count++;
        }
    }

    cout << count <<endl;
return 0;
}
