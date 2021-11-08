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
        ll i, j, k, n, d, c, m, temp, ans = 0, sum = 0;
        cin >> n >> d >> c >> m;
        string s;
        cin >> s;
        temp = count(s.begin(), s.end(), 'D');
        
        if(temp > d)ans = 1;
    
        for(i = 0; i < n; i++)
        {
            if(s[i] == 'D')
            {
                d--;
                temp--;
                c += m;
            }
            if(s[i] == 'C')
            {
                c--;
                
                if(c < 0 and temp > 0) {
                    ans = 1;
                    
                }
            }
        }

        cout << "Case #" << test_case << ": ";
        if(ans)cout << "NO";
        else
        cout << "YES";
        cout << endl;
    }
return 0;
}