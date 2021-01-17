#include<bits/stdc++.h>
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
        
        temp = 0;
    
        if(n == 1)
        {
            cout << "9";
        }
        else  
        {
            for(i = 0 ; i < n; i++)
            {
                if(i == 0)
                {
                    cout << "9";
                }
                else if(i == 1)
                {
                    cout << "8";
                }
                else if(i == 2)
                {
                    cout << "9";
                }
                else  
                {
                    cout << temp; 
                    temp++;
                    if(temp == 10)
                    {
                        temp = 0;
                    }
                }
            }
        }

        cout << endl;
    }

return 0;
}
