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
        for(i = 0; i < n; i++)
        {
            if(s[i] == '1')
            {
                ones++;
            }
            else
            {
                zero.push_back(i);
            }
        }

        count = n - ones;
        if(count % 2 and count > 2)
        {
            cout << "ALICE" << endl;
        }
        else
        {
            cout << "BOB" << endl;
        }
    }

return 0;
}