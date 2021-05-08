#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t, mid, low, high, k, n, temp;
    
    cin >> n >> t;
    
    cin >> k;
    low = 0;
    high = n - 1;

    while(low < high)
    {
        mid = (low + high) / 2;
        cout << "? 1 " << mid + 1 << endl;
        cin >> temp;
        if(temp <= mid - k + 1)
        {
            high = mid;
        }
        else
        {
            low = mid + 1;
        }
    }

    low++;
    cout << "! " << low << endl;
    

return 0;
}
