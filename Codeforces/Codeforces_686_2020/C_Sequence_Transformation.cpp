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
        ll arr[n + 1];
        arr[0] = -1;

        for(i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        ll first_index[n + 1], last_index[n + 1], count_arr[n + 1];

        for(i = 1; i <= n; i++)
        {
            first_index[i] = -1;
            last_index[i] = -1;
            count_arr[i] = 0;
        }

        for(i = 1; i <= n; i++)
        {
            if(arr[i] != arr[i - 1])
            {
                count_arr[arr[i]]++;
                if(first_index[arr[i]] == -1)
                {
                    first_index[arr[i]] = i;
                }
            }
            last_index[arr[i]] = i;
        }

        ans = 1000000007;

        for(i = 1; i <= n; i++)
        {
            if(count_arr[i] > 0)
            {
                temp = count_arr[i] - 1;
                if(first_index[i] != 1)
                    temp++;
                if(last_index[i] != n)
                    temp++;
                ans = min(ans, temp);
            }
        }

        cout << ans << endl;
    }

return 0;
}
