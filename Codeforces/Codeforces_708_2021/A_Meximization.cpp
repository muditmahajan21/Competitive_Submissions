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
        ll i, j, k, n, temp, ans = 0, sum = 0;
        cin >> n;
        ll arr[n];
        ll count[100 + 1];
        memset(count, 0, sizeof(count));
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
        }

        for(i = 0; i < 100 + 1; i++)
        {
            if(count[i] > 0)
            {
                cout << i << " ";
                count[i]--;
            }
        }

        for(i = 0; i < 100 + 1; i++)
        {
            if(count[i] > 0)
            {
                while(count[i]--)
                {
                    cout << i << " ";
                }
            }
        }

        cout << endl;
    }

return 0;
}
