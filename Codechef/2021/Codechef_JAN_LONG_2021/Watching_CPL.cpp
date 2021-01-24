#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll n, i, j, k, ans = 0, sum = 0, count = 0;
        bool flag = false;
        cin >> n >> k;
        ll arr[n];
        vector<ll> min_sum;

        for(i = 0; i< n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        } 

        if(sum < 2 * k || n == 1)
        {
            cout << -1 << endl;
            continue;
        }

        sort(arr, arr + n, greater<ll>());

        min_sum.push_back(arr[0]);
        ans = arr[0];
        
        for(i = 1; i < n; i++)
        {
            vector<ll> min_sum_temp;
            ans += arr[i];

            for(j = 0; j < min_sum.size(); j++)
            {
                min_sum_temp.push_back(min_sum[j]);
                min_sum_temp.push_back(arr[i]);
                min_sum_temp.push_back(arr[i] + min_sum_temp[j]);

                if(min_sum[j] + arr[i] >= k)
                {
                    if(ans - (min_sum[j] + arr[i]) >= k)
                    {
                        count = i; 
                        flag = true;
                        break;
                    }
                }
                if(arr[i] >= k)
                {
                    if(ans - arr[i] >= k)
                    {
                        count = i;
                        flag = true;
                        break;
                    }
                }
            }
            if(flag)
            {
                break;
            }
            copy(min_sum_temp.begin(), min_sum_temp.end(), back_inserter(min_sum));
        }
        if(flag)
        {   
            if(count > n)
            {
                count = n;
            }
            cout << count + 1 << endl;
        }
        else  
        {
            cout << -1 << endl;
        }
    }
}