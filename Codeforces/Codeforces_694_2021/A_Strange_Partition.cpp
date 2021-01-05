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
        ll i, j, k, n, x, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> x;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
            if(arr[i] % x == 0)
            {
                count += arr[i] / x;
            }
            else  
            {
                count += arr[i] / x + 1;
            }
        }

        if(sum % x == 0)
        {
            temp = sum / x;
        }
        else  
        {
            temp = sum / x + 1;
        }
        

        cout << temp << " " << count << endl;
    }

return 0;
}
