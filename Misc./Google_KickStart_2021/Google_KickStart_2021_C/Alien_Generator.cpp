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
        ll i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 1;
        cin >> n;
        ans = 3;
        for(i = 2; ans <= n; i++)
        {
            if((i % 2 == 0) ? (n % i == i / 2): (n % i == 0))
            {
                count++;
            }
            ans += i + 1;
        }

        cout << "Case #" << test_case << ": " << count + 1;
        cout << endl;
    }
return 0;
}