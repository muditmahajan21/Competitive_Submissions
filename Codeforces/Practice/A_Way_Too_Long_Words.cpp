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
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        string s;
        cin >> s;

        n = s.size();

        if(n > 10)
        {
            cout << s[0] << n - 2 << s[n - 1] << endl;
        }
        else  
        {
            cout << s << endl;
        }
    }

return 0;
}
