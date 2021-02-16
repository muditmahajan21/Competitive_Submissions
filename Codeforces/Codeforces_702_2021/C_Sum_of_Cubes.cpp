#include "bits/stdc++.h"
#define ll unsigned long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        
        bool flag = false;
        unordered_map<ll, ll> cubes;

        for(i = 1; i < 10002; i++)
        {
            temp = i * i * i;
            cubes[temp]++;
        }

        for(i = 1; i < 10002; i++)
        {
            temp = n - (i * i * i);
            if(cubes.find(temp) != cubes.end())
            {
                flag = true;
                break;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
