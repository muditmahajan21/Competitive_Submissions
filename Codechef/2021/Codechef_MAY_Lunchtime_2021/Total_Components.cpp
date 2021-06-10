#include <bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
const ll upper_bound_limmit = 10000001;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    
    ll answer[upper_bound_limmit];
    for(ll ind = 0; ind < upper_bound_limmit; ind++)
    {
        answer[ind] = 1;
    }
    
    answer[1] = 0;
    for(ll ind = 2; ind * ind < upper_bound_limmit; ind++)
    {   
        if(answer[ind] == 1)
        {
            for(ll jnd = ind * 2; jnd < upper_bound_limmit; jnd += ind)
            {
                answer[jnd] = 0;
            }
        }
    }

    for(ll ind = 3; ind < upper_bound_limmit; ind++)
    {
        if(answer[ind] == 1 and 2 * ind < upper_bound_limmit)
        {
            answer[2 * ind]--;
        }
    }

    for(ll ind = 3; ind < upper_bound_limmit; ind++)
    {
        answer[ind] = answer[ind] + answer[ind - 1];
    }

    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, sum = 0;
        cin >> n;
        
        
            k = answer[n];
        

        cout << k << endl;
    }

return 0;
}

