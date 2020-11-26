#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll i, j, n, min_index = 0, count_pos = 0, count_neg = 0, min_ele;
    cin >> n;
    ll arr[n];

    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] >= 0)
        {
            arr[i] = -arr[i] - 1;
        }
    }
    
    if(n % 2 == 1)
    {   
        min_ele = arr[min_index];
        for(i = 1; i < n; i++)
        {
            min_ele = min(arr[min_index], arr[i]);
            if(min_ele == arr[i])
            {
                min_index = i;
            }
        }
        
        arr[min_index] = -arr[min_index] - 1;
    }
    
    for(i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    

return 0;
}
