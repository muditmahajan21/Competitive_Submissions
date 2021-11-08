#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int64_t findGCD(int64_t arr[], int64_t n)
{
    int64_t result = arr[0];
    for (int64_t i = 1; i < n; i++)
    {
        result = __gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int64_t test;
    cin >> test;
    while(test--)
    {
        int64_t i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        int64_t arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(i == 0)
            {
                sum = arr[i];
            }
            else
            {
                sum = __gcd(sum, arr[i]);
            }
        }

        ans = sum;
        sort(arr, arr + n);
        temp = arr[0];

        if(ans > temp) 
        {
            cout << ans << endl;
            continue;
        }
        for(i = n - 1; i >= 0; i--)
        {
            for(j = i - 1; j >= 0; j--)
            {
                int64_t t1 = arr[i];
                int64_t t2 = arr[j];
                arr[i] =  arr[j] = arr[i] * arr[j];
                ans = max(ans, findGCD(arr, n));
                arr[i] = t1;
                arr[j] = t2;
                if(ans > temp)
                {
                    break;
                }
            }
        }

        cout << ans << endl;
    }

return 0;
}
