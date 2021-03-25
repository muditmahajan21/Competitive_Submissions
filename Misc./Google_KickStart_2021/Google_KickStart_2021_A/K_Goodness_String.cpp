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
        cin >> n >> k;
        string s;
        cin >> s;

        for(i = 0; i < (n + 1) / 2; i++)
        {
            if(s[i] == s[n - i - 1])
            {
                temp++;
            }
            else
            {
                count++;
            }
        }
        
        ans = abs(k - count);

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}