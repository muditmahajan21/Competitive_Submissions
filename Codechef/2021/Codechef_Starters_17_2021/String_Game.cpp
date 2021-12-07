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
        ll i, j, k, n, temp, ans = 0, sum = 0;
        cin >> n;
        string s;
        cin >> s;
                                                                     
        ll one = 0;
        ll zero = 0;

        for(auto e: s) if(e == '0') zero++;
        one = n - zero;

        ans = min(one, zero);

        if(!ans) 
        {
            sum = 1;
        }

        if(ans >= 2)
        {
            temp = one + zero - (2 * ans);
            if(temp % 2 == 0) sum = 1;
        }

        if(!sum) cout << "Alice";
        else cout << "Bob";
        cout << endl;
    }

return 0;
}
