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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0, min_c = 0;
        cin >> n >> k;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
            {
                count++;
            }
        }

        if(k == n)
        {
            ans = ((count) * (count + 1)) / 2;
        }
        else if(k == 1)
        {
            ans = count;
        }
        else
        {   
            temp = 0;
            for(i = 0; i < k; i++)
            {
                if(arr[i] == 1)
                {
                    temp++;
                }
            }   

            min_c = temp;

            for(i = k; i < n; i++)
            {
                if(arr[i] == 1)
                {
                    temp++;
                }
                if(arr[i - k] == 1)
                {
                    temp--;
                }
                min_c = min(min_c, temp);
            }

            ans = ((min_c) * (min_c + 1)) / 2;
            ans += (count - min_c);
        }
        cout << ans << endl;
    }

return 0;
}
