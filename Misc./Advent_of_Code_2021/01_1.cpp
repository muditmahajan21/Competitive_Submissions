#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    vector<ll> arr;
    ll temp, ans = 0;
    while(cin >> temp)
    {
        arr.push_back(temp);
    }

    ll n = arr.size();

    for(ll i = 1; i < n; i++)
    {
        if(arr[i] > arr[i - 1]) {
            ans++;
        }
    }

    cout << ans << endl;

    return 0;
}