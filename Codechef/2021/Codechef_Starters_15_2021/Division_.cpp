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
        ll i, j, k, n, temp, a, b, count = 0, ans = 0, sum = 0;
        cin >> n >> a >> b;
        k = n;
        
        sum = 0;
        count = 0;
        while(n % 2 == 0)
        {
            count++;
            n /= 2;
        }
        for(i = 3; i <= sqrt(n); i += 2)
        {
            while(n % i == 0)
            {
                sum++;
                n /= i;
            }
        }

        if(n > 1)
        {
            sum++;
        }

        if(a >= 0 and b >= 0)
        {
            ans = a * count + b * sum;
        }
        else if(a >= 0 and b < 0)
        {   
            
            if(count > 0)
            {      
                ans = a * count;
            }
            else if(sum > 0)
            {   
                ans = b;
            }
        }
        else if(a < 0 and b >= 0)
        {
            ans = sum * b;
            if(count > 0)
            {
                ans += a;
            }
        }
        else if(a < 0 and b < 0)
        {
            if(count > 0)
            {
                ans += a;
            }
            else if(sum > 0)
            {
                ans += b;
            }
        }
        cout << ans << endl;
    }

return 0;
}
