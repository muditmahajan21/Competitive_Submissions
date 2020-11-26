#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll number_of_cells(ll n)
{
    if(n == 1)
    {
        return 1;
    }
    return (n - 1) * 4 + number_of_cells(n - 1);
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
       
    ll i, j, k, n, temp, count = 0, ans = 0;
    cin >> n;

    if (n == 1) 
    {
        cout << 1 << endl;
    }
    else  
    {
        ans = number_of_cells(n);
        cout << ans << endl;
    }
return 0;
}
