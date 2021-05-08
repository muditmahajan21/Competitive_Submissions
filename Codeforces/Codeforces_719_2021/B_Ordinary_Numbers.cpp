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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        
        k = log10(n) + 1;
        ll l = 0;

        for(i = 0; i < k; i++)
        {
            ans = ans * 10 + 1;
            for(j = 1; j < 10; j++)
            {
                if(l <= (ans * j) and (ans * j) <= n)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

return 0;
}
