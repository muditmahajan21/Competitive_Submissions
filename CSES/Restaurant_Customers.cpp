#include <bits/stdc++.h>
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
        cin >> a[i] >> b[i];
    }

    sort(a, a + n);
    sort(b, b + n);

    i = 0;j = 0;
    while(i < n)
    {
        if(a[i] < b[j])
        {
            count++;
            i++;
        }
        else
        {
            count--;
            j++;
        }
        ans = max(ans, count);
    }

    cout << ans << endl;
return 0;
}