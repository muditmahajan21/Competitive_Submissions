#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 1;
        string ans = "YES";
        cin >> n;

        ll arr[n];
        vector<ll> left;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for(i = 0; i < n; i++)
        {
            if((i + 1 < n) && arr[i] == arr[i + 1])
            {
                count++;
            } 
        }

        if(count == n)
        {
            ans = "NO";
            cout << ans << endl;
            continue;
        }

        cout << ans << endl;

        temp = 0;

        for(i = 1; i < n; i++)
        {
            if(arr[temp] == arr[i])
            {
                left.push_back(i);
            }
            else
            {   
                cout << temp + 1 << " " << i + 1 << endl;
                k = i;
            }
        }

        for(i = 0; i < left.size(); i++)
        {
            cout << k + 1 << " " << left[i] + 1 << endl;
        }
    }

return 0;
}
