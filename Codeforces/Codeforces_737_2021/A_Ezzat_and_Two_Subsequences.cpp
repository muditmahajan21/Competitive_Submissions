#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    //ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        ll arr[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }

        sort(arr, arr + n);
        temp = arr[n - 1];
        sum -= temp;

        double res = 0.0;
        res = (double)sum / (double)(n - 1);
        res += (double)temp;

        printf("%.9lf", res);
        printf("\n");
    }

return 0;
}
