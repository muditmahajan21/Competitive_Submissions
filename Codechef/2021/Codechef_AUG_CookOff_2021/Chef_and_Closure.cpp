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
        
        ll zero = 0, one = 0, minus_one = 0;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 0)
            {
                zero++;
            }
            else if(arr[i] == 1)
            {
                one++;
            }
            else if(arr[i] == -1)
            {
                minus_one++;
            }
            else if(arr[i] > 1)
            {
                count++;
            }
            else if(arr[i] < -1)
            {
                sum++;
            }
        }

        if(count > 1 || sum > 1)
        {
            ans = 1;
        }
        if(minus_one > 1 and !one)
        {
            ans = 1;
        }
        if(minus_one and sum || minus_one and count)
        {
            ans = 1;
        }
        if(ans)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

return 0;
}


/*
    zero = inf 
    one = inf
    pos = only one allowed if and if no minus_one.
    neg = only one allowed if and if no minus_one.
*/