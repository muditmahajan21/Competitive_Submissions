#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll i, n, ans = 0;
        cin >> n;
        ll arr[n];
        for(i = 0; i < n; i++)
        {
                cin >> arr[i];
        }

        for(i = 1; i < n; i++)
        {
                if(arr[i] < arr[i - 1])
                {
                        ans += (arr[i - 1] - arr[i]);
                        arr[i] = arr[i - 1];
                }
        }
        cout << ans << endl;
return 0;
}
