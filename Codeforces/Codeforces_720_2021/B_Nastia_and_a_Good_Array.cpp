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
        ll min_ele = LONG_LONG_MAX, min_ind = 0;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] < min_ele)
            {
                min_ele = arr[i];
                min_ind = i;
            }
        }

        if(n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        else
        {
            cout << n << endl;
            temp = 1000000000 + 7;
            k = 1000000000 + 9;
            
            if(min_ind == 0)
            {
                cout << min_ind + 1 << " " << min_ind + 1 + 1 << " " << arr[min_ind] << " " << temp << endl;
            }
            else
            { 
                if(min_ind % 2 == 0)
                cout << min_ind + 1 << " " << min_ind - 1 + 1 << " " << arr[min_ind] << " " << temp << endl;
                else
                cout << min_ind + 1 << " " << min_ind - 1 + 1 << " " << arr[min_ind] << " " << k << endl;
            }
            
            for(i = 0; i < n; i++)
            {   
                if(i == min_ind)
                {
                    continue;
                }
                if(i % 2 == 0)
                {
                    cout << min_ind + 1 << " " << i + 1 << " " << min_ele << " " << temp << endl;
                }
                else
                {
                    cout << min_ind + 1 << " " << i + 1 << " " << min_ele << " " << k << endl;
                }
            }
        }
    }

return 0;
}
