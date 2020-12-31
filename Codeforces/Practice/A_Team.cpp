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
    
    while(n--)
    {   
        cin >> i >> j >> k;
        sum = i + j + k;
        if(sum >= 2)
        {
            count++;
        }
    }

    cout << count << endl;
return 0;
}
