
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
        ll i, j, k, n, temp, count = 0, ans = 0;
        cin >> n;
        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ans = arr[0];
        
        for(i = 1; i < n; i++)
        {
            if(ans > 0)
            {
                count++;
                ans--;
                ans += arr[i];
            }
            else  
            {
                count += ans;
                ans = 0;
                break;
            }
        }

        count += ans;
        cout << count << endl; 
    }

return 0;
}

