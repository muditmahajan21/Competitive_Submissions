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
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        int arr[n], res[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        res[0] = 0;
        for(i = 1; i < n; i++)
        {
            res[i] = (arr[i - 1] & arr[i]) ^ arr[i - 1];
            arr[i] ^= res[i];
        }

        for(auto e: res)cout << e << " ";
        cout << endl;
    }

return 0;
}
