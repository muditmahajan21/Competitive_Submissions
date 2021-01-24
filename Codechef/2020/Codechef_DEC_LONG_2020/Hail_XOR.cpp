#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll find_p(ll num)
{
    ll nearest_power_2 = 1;
    while(nearest_power_2 < num)
    {
        nearest_power_2 *= 2;
    }
    if(nearest_power_2 != num)
    {   
        nearest_power_2 /= 2;
    }
    return nearest_power_2;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll x, i, j, k, n, temp, count_x = 0, ans = 0, power_2, remaining;
        cin >> n >> x;

        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        i = 0;

        while(count_x < x)
        {
            if(i == n - 1)
            {
                break;
            }

            if(arr[i] == 0)
            {
                i++;
                continue;
            }

            power_2 = find_p(arr[i]);

            for(k = i + 1; k < n - 1; k++)
            {
                temp = arr[k] ^ power_2;
                if(temp < arr[k])
                {
                    break;
                }
            }

            arr[i] = arr[i] ^ power_2;
            arr[k] = arr[k] ^ power_2;
            count_x++;
        }

        remaining = x - count_x;
        if(n == 2 && remaining > 0 && remaining % 2 != 0)
        {
            arr[n - 1] = arr[n - 1] ^ 1;
            arr[n - 2] = arr[n - 2] ^ 1;
        }

        for(i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

return 0;
}
