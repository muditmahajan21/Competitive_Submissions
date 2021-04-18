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
        vector<ll> odd, even;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                even.push_back(arr[i]);
            }
            else
            {
                odd.push_back(arr[i]);
            }
        }

        for(auto itr = odd.begin(); itr != odd.end(); itr++)
        {
            cout << *itr << " ";
        }
        for(auto itr = even.begin(); itr != even.end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;


    }

return 0;
}
