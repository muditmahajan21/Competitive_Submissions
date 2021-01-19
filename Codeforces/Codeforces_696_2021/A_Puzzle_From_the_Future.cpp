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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        string a = "", b; 

        cin >> b;
        ll aa[n], bb[n];

        for(i = 0; i < n; i++)
        {
            if(b[i] == '1')
            {
                bb[i] = 1;
            }
            else  
            {
                bb[i] = 0;
            }
        }

        aa[0] = 1;

        for(i = 1; i < n; i++)
        {
            temp = aa[i - 1] + bb[i - 1]; 
            
            if(temp == 0)
            {
                if(bb[i] == 1)
                {
                    aa[i] = 1;
                }
                else  
                {
                    aa[i] = 1;
                }
            }
            else if(temp == 1)
            {
                if(bb[i] == 1)
                {
                    aa[i] = 1;
                }
                else  
                {
                    aa[i] = 0;
                }
            }
            else  
            {
                if(bb[i] == 1)
                {
                    aa[i] = 0;
                }
                else  
                {
                    aa[i] = 1;
                }
            }
        }

        for(i = 0; i < n; i++)
        {
            cout << aa[i];
        }

        cout << endl;
    }

return 0;
}
