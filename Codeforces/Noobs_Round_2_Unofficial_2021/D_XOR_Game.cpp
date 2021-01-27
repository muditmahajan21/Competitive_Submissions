#include "bits/stdc++.h"
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
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k;
        
        for(j = k; j >= 1; j--)
        {   
            temp = n ^ j;
            sum = n ^ k;
            if(temp > sum)
            {
                ans = 1;
                break;
            }
        }

        if(ans == 0)
        {
            for(i = n; i >= 1; i--)
            {   
                temp = i ^ k;
                sum = n ^ k;
                if(temp > sum)
                {   
                    ans = 1;
                    break;
                }
            }
        }

        if(ans == 0)
        {
            cout << "No" << endl;
        }
        else 
        {
            cout << "Yes" << endl;
        }
    }

return 0;
}
