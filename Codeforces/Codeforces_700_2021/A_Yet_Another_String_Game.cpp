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
        
        string s;
        cin >> s;
        n = s.size();
        for(i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(s[i] == 'a')
                {
                    s[i] = 'b';
                }
                else 
                {
                    s[i] = 'a';
                }
            }
            else 
            {
                if(s[i] == 'z')
                {
                    s[i] = 'y';
                }
                else 
                {
                    s[i] = 'z';
                }
            }
        }

        cout << s <<endl;
    }

return 0;
}