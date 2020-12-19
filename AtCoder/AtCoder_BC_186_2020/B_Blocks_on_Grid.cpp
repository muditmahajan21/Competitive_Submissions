#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0, m;
        cin >> n >> m; 
        vector<ll> a;
        ll arr[n][m];
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                a.push_back(arr[i][j]);
            }
        }

        temp = *min_element(a.begin(), a.end());

        for(i = 0; i < a.size(); i++)
        {
            ans += a[i] - temp;
        }

        cout << ans << endl;

    

return 0;
}
