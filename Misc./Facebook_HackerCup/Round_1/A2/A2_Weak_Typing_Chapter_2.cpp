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
        string s;
        cin >> s; 

        for(i = 0; i < n; i++)
        {   
            if(s[i] == 'F')
            {
                continue;
            }
            for(j = i + 1; j < n; j++)
            {   
                
                if(s[i] == s[j])
                {
                    i = j - 1;
                    break;
                }
                
                if(s[i] == 'X' and s[j] == 'O' || s[i] == 'O' and s[j] == 'X')
                {
                    temp = (i + 1) * (n - j);
                    temp %= MOD;
                    ans += temp;
                    ans %= MOD;
                    i = j - 1;
                    break;
                }
            }
        }

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}