#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll t = 0; t < test; t++)
    {
        ll n, i, j, k;
        cin >> n;
        ll arr[n][n];

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        vector<ll> sum;
        ll temp1 = 0, temp2 = 0;

        for(k = 0; k < n; k++)
        {   
            temp1 = 0;
            temp2 = 0;
            for(i = 0, j = k; i < n && j < n; i++, j++)
            {
                temp1 += arr[i][j];
                temp2 += arr[j][i];
            }
            sum.push_back(temp1);
            sum.push_back(temp2);

        }

        ll ans = *max_element(sum.begin(), sum.end());

        cout << "Case #" << t + 1 << ": " << ans << endl;
    }

return 0;
}   