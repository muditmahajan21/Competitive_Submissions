#include<bits/stdc++.h>
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
        ll sum = 0, i, j, k, n, temp, count = 0, ans = -1;
        cin >> n;

        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i += 2)
        {
            cout << -arr[i + 1] << " ";
            cout << arr[i] << " "; 
        } 
        cout << endl;
    }

return 0;
}
