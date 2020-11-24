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
        ll i, j, k, n, temp, count = 0, ans = 0;
        cin >> n;

        ll arr[n];

        for(i = n, j = 1; i > 0, j <= n; i--, j++)
        {   
            if(i == j)
            {
                arr[j + 1] = i;
                arr[j] = i - 1;
                j++;
                i--;
                continue;
            }
            arr[j] = i;
        }

        for(i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

return 0;
}
