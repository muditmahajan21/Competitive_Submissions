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
    ll a, b;
    cin >> a >> b;
    
    while(true)
    {
        if(a > b)
        {
            break;
        }
        a *= 3;
        b *= 2;
        count++;
    }

    cout << count << endl;

return 0;
}
