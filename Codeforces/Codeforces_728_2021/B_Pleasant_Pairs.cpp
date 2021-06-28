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
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n - 1; i++)
        {
            temp = i + 1;
            if(i + 1 < arr[i] + i)
            {
                temp = arr[i] + i - 2;
            }
            for(j = temp; j < n; j++)
            {
                if(arr[i] * arr[j] - 2 == i + j)
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

return 0;
}
