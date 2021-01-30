#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll i, n, ans = 1, count = 0; 
        string s;
        cin >> s;

        n = s.size();

        for(i = 0; i < n - 1; i++)
        {   
                count = 1;
                while(s[i] == s[i + 1])
                {
                        count++;
                        i++;
                }
                ans = max(count, ans);
        }

        cout << ans << endl;
return 0;
}
