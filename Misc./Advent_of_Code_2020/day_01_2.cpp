#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector<ll> arr;
    ll temp, ans;
    while(cin >> temp)
    {
        arr.push_back(temp);
    }

    ll n = arr.size();

    for(ll i = 0; i < n; i++)
    {
        for(ll j = i + 1; j < n; j++)
        {
            for(ll k = j + 1; k < n; k++)
            {
                if(arr[i] + arr[j] + arr[k] == 2020)
                {
                    ans = arr[i] * arr[j] * arr[k];
                    break;
                }
            }
        }
    }

    cout << ans << endl;

    return 0;
}