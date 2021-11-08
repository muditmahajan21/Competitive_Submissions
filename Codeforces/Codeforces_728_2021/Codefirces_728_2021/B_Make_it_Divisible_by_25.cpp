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

        j = 0;
        temp = n;

        while(temp)
        {
            if(temp % 10 == 0)
            {   
                temp /= 10;
                break;
            }
            temp /= 10;
            j++;
        }   

        bool ok = false;

        while(temp)
        {
            k = temp % 10;
            if(k == 5 || k == 0)
            {
                ok = true;
                break;
            }
            temp /= 10;
            j++;
        }

        if(!ok)
        {
            count = LONG_LONG_MAX;
        }
        else
        {
            count = j;
        }
        

        temp = n;
        k = 0;
        while(temp)
        {
            if(temp % 10 == 5)
            {   
                temp /= 10;
                break;
            }
            temp /= 10;
            k++;
        }  

        bool flag = false;

        while(temp)
        {
            j = temp % 10;
            if(j == 2 || j == 7)
            {
                flag = true;
                break;
            }
            temp /= 10;
            k++;
        }
        
        if(!flag)
        {
            sum = LONG_LONG_MAX;
        }
        else
        {
            sum = k;
        }

        ans = min(sum, count);
        cout << ans << endl;
    }

return 0;
}
