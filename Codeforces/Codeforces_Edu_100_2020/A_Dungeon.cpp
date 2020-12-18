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
        ll a, b, c, i, j, k, n, temp, count = 0, ans = 0;
        cin >> a >> b >> c;
        ans = a + b + c;
        
        temp = min(b, c);
        temp = min(a, temp);

        if(ans % 9 == 0 && temp >= ans / 9)
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
