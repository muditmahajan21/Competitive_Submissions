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
        ll i, j, k, n, temp, count = 0, ans = 0, sum_odd = 0, sum_even = 0;
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i % 2 == 0)
            {
                sum_even += arr[i];
            }
            else 
            {
                sum_odd += arr[i];
            }
        }

        if(sum_even < sum_odd)
        {
            for(i = 0; i < n; i += 2)
            {
                arr[i] = 1;
            }
        }
        else  
        {
            for(i = 1; i < n; i += 2)
            {
                arr[i] = 1;
            }
        }

        for(i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

return 0;
}
 


