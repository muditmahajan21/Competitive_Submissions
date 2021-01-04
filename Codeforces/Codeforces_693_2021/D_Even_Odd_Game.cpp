#include<bits/stdc++.h>
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
        
        ll arr[n];
        ll alice = 0, bob = 0;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<ll>());

        for(i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(arr[i] % 2 == 0)
                {
                    alice += arr[i];
                }
            }
            else  
            {
                if(arr[i] % 2 != 0)
                {
                    bob += arr[i];
                }
            }
        }

        if(alice > bob)
        {
            cout << "Alice" << endl;
        }
        else if(bob > alice)
        {
            cout << "Bob" << endl;
        }
        else  
        {
            cout << "Tie" << endl;
        }
    }

return 0;
}
