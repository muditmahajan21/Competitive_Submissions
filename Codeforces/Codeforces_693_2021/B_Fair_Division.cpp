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
        ll i, j, k, n, temp = 1, count1 = 0, count2 = 0, ans = 0, sum = 0;
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1)
            {
                count1++;
            }
            else  
            {
                count2++;
            }
            sum += arr[i];
        }
        if(sum % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        sum = sum / 2;
        if((sum / 2) % 2 != 0 && count1 > 0)
        {
            sum = sum - 1;
            count1--;
        }

        sum -= min((sum / 2) * 2, 2 * count2) ;
        sum -= min(sum, count1);

        if(sum <= 0)
        {
            cout << "YES" << endl;
        }
        else  
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
