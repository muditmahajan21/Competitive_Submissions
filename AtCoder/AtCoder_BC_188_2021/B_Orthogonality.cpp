#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        ll a[n], b[n];
        
        for(i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(i = 0; i < n; i++)
        {
            cin >> b[i];
            ans += a[i] * b[i];
        }

        if(ans == 0)
        {
            cout << "Yes" << endl;
        }
        else  
        {
            cout << "No" << endl;
        }
    

return 0;
}
