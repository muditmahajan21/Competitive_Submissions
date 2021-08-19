#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    ll arr[1000];
    
    ll ind = 0, t = 1;
    while(ind < 1000)
    {
        if(t % 3 == 0 || t % 10 == 3)
        {
            t++;
            continue;
        }
        else
        {
            arr[ind] = t;
            t++;
            ind++;
        }
    }
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> k;
        k--;
        cout << arr[k] << endl;
    }

return 0;
}
