#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test;
    cin >> test;
    
    while(test--)
    {
        long long int i, n, k, count = 0;
        cin >> n >> k;
        long long int arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i ++)
        {
            if(arr[i] >= k)
            {
                count++;
                arr[i + 1] += arr[i] - k;
            }
            if(arr[i] < k)
            {
                break;
            }
        }

        if(i == n)
        {
            count += ((arr[n - 1] - k) / k);
        }

        count++;

        cout << count << endl;

    }
return 0;
}