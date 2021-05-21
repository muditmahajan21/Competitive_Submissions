#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool is_palindrome(string s)
{
    string t;
    t = string(s.rbegin(), s.rend());
    if(s == t)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k = 0, n, rev = 0, turn = 1, temp, count = 0, ans = 0, sum = 0, ones = 0;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> zero;
        for(i = 0; i < n / 2; i++)
        {
            if(s[i] != s[n - i - 1])
            {
                ans++;
            }
        }

        for(i = 0; i < n; i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
        }

        if(ans == 0)
        {
            if(count % 2 and count > 2)
            {
                cout << "ALICE" << endl;
            }
            else
            {
                cout << "BOB" << endl;
            }
        }
        else if(ans == 1)
        {
            if(count == 2)
            {
                cout << "DRAW" << endl;
            }
            else
            {
                cout << "ALICE" << endl;
            }
        }
        else
        {
            cout << "ALICE" << endl;
        }
    }

return 0;
}