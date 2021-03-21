#include <bits/stdc++.h>
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
        i = 0;
        while(true)
        {
            i = s.find("party", i);
            if(i == string::npos)
            {
                break;
            }
            s.replace(i, 5, "pawri");
            i += 5;
        }
        cout << s << endl;
    }

return 0;
}
