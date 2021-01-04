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
    string a, b;
    cin >> a;
    cin >> b;

    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);


    if(a < b)
    {
        cout << -1 << endl;
    }
    else if(a > b)
    {
        cout << 1 << endl;
    }
    else  
    {
        cout << 0 << endl;
    }
    
return 0;
}
