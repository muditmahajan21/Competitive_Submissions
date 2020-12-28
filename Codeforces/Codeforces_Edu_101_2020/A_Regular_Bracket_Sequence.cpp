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
        bool flag = true;
        string s;
        cin >> s;
        n = s.size();
        stack<char> stck, q;

        for(i = 0; i < n; i++)
        {
            if(s[i] == '?')
            {
                count++;
            }
        }

        if(count % 2 != 0 || s[0] == ')' || s[n - 1] == '(')
        {
            cout << "NO" << endl;
        }
        else  
        {
            cout << "YES" << endl;
        }
    }

return 0;
}
