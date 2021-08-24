#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool check(vector<ll> &arr, vector<ll> &copy)
{   
    ll n = arr.size();
    for(ll i = 0; i < n; i++)
    {
        if(arr[i] != copy[i])
        {
            return false;
        }
    }
    return true;
}

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
        vector<ll> arr(n);
        vector<ll> copy(n);
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            copy[i] = arr[i];
        }
        sort(arr.begin(), arr.end());

        i = 0;
        while(!check(arr, copy))
        {
            if(i % 2 == 0)
            {
                for(j = 0; j < n; j+=2)
                {
                    if(copy[j] > copy[j+1])
                    {
                        swap(copy[j], copy[j+1]);
                    }
                }
            }
            else
            {
                for(j = 1; j < n; j+=2)
                {
                    if(copy[j] > copy[j+1])
                    {
                        swap(copy[j], copy[j+1]);
                    }
                }
            }
            i++;
        }

        cout << i << endl;
    }

return 0;
}
