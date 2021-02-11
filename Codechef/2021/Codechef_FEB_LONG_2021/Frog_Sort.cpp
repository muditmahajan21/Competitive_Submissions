#include "bits/stdc++.h"
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
        cin >> n;
        ll weight[n], position[n];

        for(i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> position[i];
        }

        temp = find(weight, weight + n, 1) - weight;

        for(i = 2; i <= n; i++)
        {
            k = find(weight, weight + n, i) - weight;
            count = 0;
            if(k < temp)
            {
                count = temp - k;
                count /= position[k];
                count++;
            }
            
            else if(k == temp)
            {
                count++;
            }
            
            ans += count;
            temp = k + count * position[k];
        }

        cout << ans << endl;
    }

return 0;
}
