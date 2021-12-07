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
        cin >> n >> k;

        vector<ll> arr;
        for(i = 1; i < n / 2; i++)
        {
            if(i * 2 <= n)
            {
                ans += 2;
                arr.push_back(i);
                arr.push_back(i * 2);
            }
        }

        if(ans <= k || ans % k == 0)
        {
            cout << "Yes" << endl;
            for(i = 0; i < k; i++)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

return 0;
}
