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

void swap(ll *a, ll *b)
{
    ll temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, c, m, temp = 0, count = 0, ans = 0, sum = 0;
        cin >> n >> c;
        ll min_sum = n - 1;
        ll max_sum = (n * (n + 1)) / 2 - 1;

        if(c < min_sum || c > max_sum)
        {
            cout << "Case #" << test_case << ": IMPOSSIBLE";
        }
        else
        {
            ll res[n];
            for(i = 0; i < n; i++)
            {
                res[i] = i;
            }

            ll result[n];
            c = c - n + 1;

            for(i = 1; i < n; i++)
            {
                temp = min(c, n - (i));
                c -= temp;
                k = i + temp - 1;
                for(j = i - 1 ; j < k; j++)
                {
                    swap(&res[j], &res[k]);
                    k--;
                }
                result[res[i - 1]] = i; 
            }
            result[res[n - 1]] = n;
            cout << "Case #" << test_case << ": ";
            output_array(result, n);
        }
        cout << endl;
    }
return 0;
}