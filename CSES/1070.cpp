#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll i, n;
        cin >> n;

        if(n == 2 || n == 3)
        {
                cout << "NO SOLUTION" << endl;
        }
        else                  
        {   
                if(n == 4)
                {
                        cout << "3 1 4 2" << endl;
                }
                for(i = n; i >= 1; i -= 2)
                {
                        cout << i << " ";
                }
                for(i = n - 1; i >= 1; i -= 2)
                {
                        cout << i << " ";
                }
                cout << endl;
        }
        return 0;
}
