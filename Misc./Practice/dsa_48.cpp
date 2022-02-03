#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    string s;
    cin >> s;
    n = s.size();
    vector<int> c(26);
    
    for(i = 0; i < n; i++)
    {
        c[s[i] - 'a']++;
    }

    for(i = 0; i < 26; i++)
    {
        if(c[i] > 1)
        {
            cout << char('a' + i) << " ";
        }
    }

return 0;
}
