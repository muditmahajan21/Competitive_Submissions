#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    
    ll t;
    vector<ll> squares;

    ll l = 1, r = 1000000;
     ll number = ceil(sqrt(l)); 
  
    
    ll n2 = number * number; 
  
    
    number = (number * 2) + 1; 
  
    
    
    while ((n2 >= l && n2 <= r)) { 
  
        
       squares.push_back(n2);
        
        
        n2 = n2 + number; 
  
        
        number += 2; 
    } 

    
    ll n = squares.size();

    while(test--)
    {
       
            for(ll i = 0; i < n; i++)
            {
                cout << squares[i] << endl;
                cout.flush();
                cin >> t;

                if(t == 1)
                {
                    break;
                }
            }
        
    }

return 0;
}
