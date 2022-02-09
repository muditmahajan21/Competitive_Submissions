#include <bits/stdc++.h>
#define ll unsigned long long int
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
        ll i, j, k, n, temp, x, y, count = 0, ans = 0, sum = 0;
        cin >> n >> x >> y;
        k = x + 3;
        vector<ll> arr(n);
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        vector<ll> brr(2 *  (n + 1));
        brr[0] = x;
        for(i = 0, j = 0; i < n; i++, j++)
        {
            brr[2 * i + 1] = arr[j] + brr[i];
            brr[2 * i + 2] = arr[j] ^ brr[i];
        }

       // for(auto e: brr)cout << e << " ";
       // cout << endl;

        for(i = n; i < brr.size(); i++)
        {
            if(brr[i] == y)
            {
                ans = 1;
                break;
            }
        }

        if(ans) cout << "Alice";
        else cout << "Bob";
        cout << endl;
    }
return 0;
}
