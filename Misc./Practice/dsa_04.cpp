#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    int arr[n];
    for(i = 0; i < n; i++) cin >> arr[i];

    for(int j = 0, i = 0; i < n; i++)
    {
        if(arr[i] < 0)
        {
            if(i != j)
            {
                swap(arr[i], arr[j++]);
            }
        }
    }

    for(i = 0; i < n; i++) cout << arr[i] << " ";

return 0;
}
