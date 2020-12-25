#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
    ll test;
    cin >> test;
    for(ll t = 0; t < test; t++)
    {   
        ll n, i, j;
        string P, W;

        cin >> n;
        char res[n][n];
        
        cin >> P;
        cin >> W;
        for(i = 0; i < n; i++)
        {
            for(j = i; j < n; j++)
            {
                if(i == j)
                {
                    res[i][j] = 'Y';
                }
                else if(W[i] == 'N' || P[j] == 'N')
                {
                    res[i][j] = 'N';
                }
                else if(W[i] == 'Y' && P[j] == 'Y' && res[i][j-1] == 'Y' && W[j-1] == 'Y') 
                {
                    res[i][j] = 'Y';
                }
                else
                {
                    res[i][j] = 'N';
                }
            }
        }

        for(i = n - 1; i >= 0; i--)
        {
            for(j = i - 1; j >= 0; j--)
            {
                if(W[i] == 'N' || P[j] == 'N') 
                {
                    res[i][j] = 'N';
                }
                else if(W[i] == 'Y' && P[j] == 'Y' && res[i][j+1] == 'Y' && W[j+1]== 'Y') 
                {
                    res[i][j] = 'Y';
                }
                else 
                {
                    res[i][j] = 'N';
                }
            }
        }

        cout << "Case #" << t + 1 << ": " << endl;
        
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                cout << res[i][j];
            }
            cout << endl;
        }
        
    }
    return 0;
} 




