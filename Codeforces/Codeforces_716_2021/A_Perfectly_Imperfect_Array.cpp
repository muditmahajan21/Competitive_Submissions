#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool checkperfectsquare(ll n)
{
     
    // If ceil and floor are equal
    // the number is a perfect
    // square
    if (ceil(( long double)sqrt(n)) == floor(( long double)sqrt(n))) {
       return true;
    }
    else {
       return false;
    }
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
        ll arr[n], copy[n];
        bool flag = false;
        
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            copy[i] = sqrt(arr[i]);
        }

        for(i = 0; i < n; i++)
        {
            temp = copy[i] * copy[i];
            if(temp != arr[i])
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