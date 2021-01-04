#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll w, i, j, k, n, temp, count = 0, ans = 0, sum = 0;

    cin >> k >> n >> w;

    for(i = 1; i <= w; i++)
    {
        sum += i * k;
    }

    if(sum > n)
    {
        ans = sum - n;
    }

    cout << ans << endl;
return 0;
}
