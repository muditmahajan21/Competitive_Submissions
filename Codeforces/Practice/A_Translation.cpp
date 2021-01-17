#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    string s, t;
    cin >> s;
    cin >> t;

    reverse(t.begin(), t.end());

    if(t == s)
    {
        cout << "YES" << endl;
    }
    else  
    {
        cout << "NO" << endl;
    }

return 0;
}
