#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
using namespace std;

void output_array(ll arr[], ll n)
{
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 0;
        cin >> n;
        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i++)
        {
            k = i;
            for(j = i; j < n; j++)
            {
                if(arr[j] < arr[k])
                {
                    k = j;
                }
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

                
            }
            ans += j;
        }

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}