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
        deque<ll> dq;
        cin >> arr[0];
        dq.push_back(arr[0]);

        for(i = 1; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < dq.front())
            {
                dq.push_front(arr[i]);
            } 
            else
            {
                dq.push_back(arr[i]);
            }
        }

        for(auto e: dq)
        {
            cout << e << " ";
        }
        cout << endl;
    }

return 0;
}
