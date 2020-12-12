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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k;
        ll arr[n + 1];

        if(n % 2 == 0)
        {
            for(i = 1; i <= n; i++)
            {
                if(i % 2 == 0)
                {
                    arr[i] = i;
                }
                else  
                {
                    arr[i] = -i;
                }
            }
        }
        else if(n % 2 != 0)
        {
            for(i = 1; i <= n; i++)
            {
                if(i % 2 != 0)
                {
                    arr[i] = i;
                }
                else  
                {
                    arr[i] = -i;
                }
            }
        }

        count = ceil((float)n / 2);

        for(i = 1; i <= n; i++)
        {
            sum += arr[i];
            if(sum > 0)
            {
                if(count < k)
                {
                    for(i = n; i >= 1; i--)
                    {
                        if(arr[i] < 0)
                        {
                            arr[i] *= -1;
                            count++;
                            if(count == k)
                            {
                                break;
                            }
                        }
                    }
                }
                else if(count > k)
                {
                    for(i = n; i >= 1; i--)
                    {
                        if(arr[i] > 0)
                        {
                            arr[i] *= -1;
                            count--;
                            if(count == k)
                            {
                                break;
                            }
                        }
                    }
                }
            }
        }

        for(i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }   
        cout << endl;
    }

return 0;
}
