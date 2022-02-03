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

    pair<int, int> req;
    if(n % 1)
    {
        req.first = arr[0];
        req.second = arr[0];
    }
    else
    {
        req.first = arr[0];
        req.second = arr[1];
    }

    if(n % 1)
    {
        i = 1;
    }
    else
    {
        i = 2;
    }

    for(; i < n - 1; i += 2)
    {
        if(req.first < arr[i])
        {
            req.first = arr[i];
        }
        if(req.second > arr[i])
        {
            req.second = arr[i];
        }
        if(req.first < arr[i + 1])
        {
            req.first = arr[i + 1];
        }
        if(req.second > arr[i + 1])
        {
            req.second = arr[i + 1];
        }
    }

    cout << "Minimum element: " << req.second << " " << "Maximum element: " << req.first << endl;

return 0;
}
