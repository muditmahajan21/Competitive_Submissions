#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, v, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> v; 
        ll max_ans = (n * (n - 1)) / 2;
        
        if(v == 1)
        {
            ans = max_ans;
        }
        else
        {
            if(v > n)
            {
                ans = n - 1;
            }
            else
            {
                ll days = n - v;
                ans += (days * (days + 1)) / 2 - 1;
                ans += v;
            }
            if(n == 1)
            {
                ans = 0;
            }
        }
        
        cout << max_ans << " " << ans << endl;
    }

return 0;
}
