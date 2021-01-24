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
        ll d, i, j, k, n, temp, count = 0, ans = 0;
        cin >> n >> d;
        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] >= 80 || arr[i] <= 9)
            {
                count++;
            }
        }

        temp = n - count;

        if(temp % d == 0)
        {
            ans = temp / d;
        }
        else  
        {
            ans = temp / d + 1;
        }

        if(count % d == 0)
        {
            ans += count / d;
        }
        else  
        {
            ans += count / d + 1;
        }

        cout << ans << endl;
    }

return 0;
}
