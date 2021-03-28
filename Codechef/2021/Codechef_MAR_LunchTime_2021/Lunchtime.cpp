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
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        vector<ll> arr, res;
        
        for(i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        arr.insert(arr.begin(), 0);
        arr.push_back(0);

        for(i = 1; i <= n; i++)
        {
            ans = 0;
            for(k = i - 1; k >= 0; k--)
            {
                if(arr[i] != arr[k])
                {   
                    if(arr[k] > arr[i])
                    {
                       break;
                    }
                }
                else
                {
                    ans++;
                }
            }
            for(j = i + 1; j <= n; j++)
            {
                if(arr[i] != arr[j])
                {
                    if(arr[j] > arr[i])
                    {
                        break;
                    }
                }
                else
                {
                    ans++;
                }
            }
            res.push_back(ans);
        }

        for(auto itr = res.begin(); itr != res.end(); itr++)
        {
            cout << *itr << " ";
        }
        cout << endl;
    }
return 0;
}
