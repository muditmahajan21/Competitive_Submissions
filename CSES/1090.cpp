#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll n, x, i;
        cin >> n >> x;
        ll arr[n];
        for(i = 0; i < n; i++)
        {
                cin >> arr[i]; 
        }

        sort(arr, arr + n);
        ll ans = 0;
        ll j;

        i = 0;
        j = n - 1;

        while(i <= j)
        {
                if(arr[i] + arr[j] <= x)
                {   
                        i++;
                        j--;
                }
                else     
                {
                        j--;
                }
                ans++;
        }
        cout << ans << endl;
return 0;
}
