#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll twoSumCloset(vector<ll> &nums, ll target) {
    sort(nums.begin(), nums.end());
    ll low = 0, high = nums.size() - 1;
    ll diff = LONG_LONG_MAX;

    while (low < high) 
    {
        int sum = nums[low] + nums[high];
        if (sum > target) 
        {
            high--;
        } 
        else 
        {
            low++;
        }
        diff = min(diff, abs(sum - target));
    }

    return diff;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = LONG_LONG_MAX, sum = 0;
        cin >> n;
        vector<ll> arr(n), two_sum;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i != 0 and i != n - 1)
            {
                two_sum.push_back(arr[i]);
            }
        }

        i = 0;
        j = n - 1;
        sort(arr.begin(), arr.end());
        temp = arr[i] + arr[j];
        
        if(n <= 3)
        {
            if(n == 2)
            {
                ans = 0;
            }
            else 
            {   
                sort(arr.begin(), arr.end());
                ans = min(arr[2] - arr[1], arr[1] - arr[0]);
            }
        }
        else
        {       
            k = arr[(n + 2) / 2];
            for(i = 1; i < n; i++)
            {
                sum += abs(arr[i] - k);
            }
            ans = sum;
            sum = 0;

            k = arr[(n - 1) / 2];
            
            for(i = 0; i < n - 1; i++)
            {
                sum += abs(arr[i] - k);
            }
            ans = min(ans, sum);
            ans = min(ans, twoSumCloset(two_sum, temp));
        }
        cout << ans << endl;
       
    }

return 0;
}