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
        cin >> n >> k;

        if(k > n) 
        {
            cout << "-1" << endl; 
        }
        else if(k == 1) 
        {
            if(n == 1)
            {
                cout << "1" << endl;
            }
            else 
            {
                cout << "-1" << endl; 
            }
        }
        else
        {   
            for(i = k; i <=  n; i++) cout << i << " ";
            for(i = 1; i < k; i++) cout << i << " ";
            cout << endl;
        }
    }

return 0;
}
