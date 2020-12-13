
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll arr[4];
    for(ll i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }

    cout << *min_element(arr, arr + 4);
return 0;
}
