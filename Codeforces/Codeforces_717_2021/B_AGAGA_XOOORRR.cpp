#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;
#define BIT 32

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

        ll pref[n + 1];
        pref[0] = 0;
        for(i = 1; i <= n; i++)
        {
            pref[i] = pref[i - 1] ^ arr[i - 1];
        }

        if(pref[n] == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            temp = pref[n];
            k = 0;
            while(pref[k] != temp)
            {
                k++;
            }
            bool flag = false;
            for(i = k; i <= n; i++)
            {
                if(pref[i] == 0)
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

return 0;
}