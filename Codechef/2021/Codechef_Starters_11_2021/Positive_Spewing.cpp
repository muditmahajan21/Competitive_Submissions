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
        ll i, j, k, n, temp, ans = 0, sum = 0;
        cin >> n >> k;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll c = count(arr, arr + n, 0);
        if(c == n)
        {
            cout << ans << endl; 
            continue;
        }
        else
        {
            while(c > 0 and sum < k)
            {   
                bool flag = false;
                for(i = 0; i < n; i++)
                {
                    if(arr[i] > 0)
                    {
                        if(i == 0)
                        {
                            arr[i + 1]++;
                            arr[n - 1]++;
                            if(arr[n - 1] == 1)
                            {
                                flag = true;
                            }
                        }
                        else if(i == n - 1)
                        {   
                            if(flag)
                            {
                                flag = false;
                            }
                            else
                            {
                                arr[i - 1]++;
                                arr[0]++;
                            }
                        }
                        else
                        {
                            arr[i - 1]++;
                            arr[i + 1]++;
                        }
                        if(i + 1 != n and arr[i + 1] == 1)
                        {
                            i++;
                        }
                    }
                }
                sum++;
                c = count(arr, arr + n, 0);
            }

            ans = accumulate(arr, arr + n, ans);
            
            if(sum < k)
            {
                temp = (k - sum) * 2 * n;
                ans += temp;
            }

            cout << ans << endl;
        }
    }

return 0;
}