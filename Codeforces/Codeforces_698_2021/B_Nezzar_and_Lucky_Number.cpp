#include "bits/stdc++.h"
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
        ll arr[n];
        bool flag = false;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i++)
        {   
            flag = false;
            temp = arr[i];

            while(temp > 0)
            {
                ans = temp;
                while(ans > 0)
                {
                    if(ans % 10 == k)
                    {
                        flag = true;
                        break;
                    }
                    ans /= 10;
                }
                if(flag)
                {
                    cout << "YES" << endl;
                    break;
                }
                else
                {
                    temp -= k;
                }
            }
            if(!flag)
            {
                cout << "NO" << endl;
            }
        }
    }

return 0;
}
