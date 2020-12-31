#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k;
        
        string s;
        cin >> s;
        
        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == 'x')
            {
                k--;
            }
            else if(s[i] == 'o')
            {
                k++;
            }
            if(k < 0)
            {
                k = 0;
            }
        }

        cout << k << endl;

return 0;
}
