#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool is_power_of_2(int n)
{
    if(n == 0)  
        return false;

    return(ceil(log2(n)) == floor(log2(n)));
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll n, i;
        cin >> n;
        
        //If number is 1.
        if(n == 1)
        {
            cout << 1 << endl;
            continue;
        }

        //Check if n is power of 2.
        else if(is_power_of_2(n))
        {
            cout << -1 << endl;
            continue;
        }

        else 
        {
            cout << 2 << " " << 3 << " " << 1 << " ";

            i = 4;
            while(i <= n)
            {
                if(is_power_of_2(i))
                {
                    cout << i + 1 << " " << i << " ";
                    i += 2;
                }
                else  
                {
                    cout << i << " ";
                    i++;
                }
            }

            cout << endl;
        }    
    }
return 0;
}