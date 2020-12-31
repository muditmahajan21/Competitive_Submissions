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
        ll a, b, c, d;
        cin >> a >> b;
        cin >> c >> d;

        i = c - a;
        j = d - b;

        if(i == 0 && j == 0)
        {
            ans = 0;
        }
        else if(i == j || i == -j)
        {
            ans = 1;
        }
        else if(abs(i) + abs(j) <= 3)
        {
            ans = 1;
        }
        else if(abs(i) + abs(j) <= 6)
        {
            ans = 2;
        }
        else if(abs(i +  j) <= 3 || abs(i - j) <= 3)
        {
            ans = 2;
        }
        else if((a + b + c +d) % 2 == 0)
        {
            ans = 2;
        }
        else  
        {
            ans = 3;
        }

        cout << ans << endl;

return 0;
}
