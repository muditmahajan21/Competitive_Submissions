#include<bits/stdc++.h>
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
        ll w, h, i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> w >> h >> n;
        
        while(w % 2 == 0 || h % 2 == 0)
        {
            if(w % 2 == 0)
            {
                w /= 2;
                count++; 
                continue;
            }
            else  
            {
                h /= 2;
                count++;
            }
        }

        ans = pow(2, count);

        if(ans >= n && (w != 0 || h != 0))
        {
            cout << "YES" << endl;
        }
        else  
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
