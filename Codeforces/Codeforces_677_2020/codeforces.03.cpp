#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 1, ans = 0;
        cin >> n;

        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i++)
        {
            if((i + 1 < n) && arr[i] == arr[i + 1])
            {
                count++;
            } 
        }

        ans = distance(arr, max_element(arr, arr + n));

        while(ans + 1 < n)
        {   
            if(arr[ans] > arr[ans - 1] && ans - 1 >= 0)
            {
                break;
            }
            if(arr[ans] == arr[ans + 1])
            {
                ans++;
            }
            if(arr[ans] > arr[ans + 1])
            {
                break;
            }
        }
        
        ++ans;

        if(count == n)
            ans = -1;

        cout << ans << endl;
    }

return 0;
}
