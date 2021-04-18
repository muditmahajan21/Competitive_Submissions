#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
   
    ll q, i, j, k, n, x, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    ll arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cin >> q;
    while(q--)
    {   
        ans = 0;
        cin >> x >> k;
        i = x - 1;
        count = 0;
        sum = 0;

        while(k > 0 and i < n)
        {
            if(arr[i] >= k - count)
            {
                arr[i] -= k - count;
                count = k;
                break;
            }
            count += arr[i];
            arr[i] = 0;
            sum += k - count;
            i++;
        }
        if(k == count)
        {
            ans = sum;
        }
        else
        {
            ans = (sum / k) * count;
        }

        cout << ans << endl;
    }
return 0;
}
