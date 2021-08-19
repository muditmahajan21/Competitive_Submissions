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
        cin >> n >> k;
        string s;
        cin >> s;

        k--;

        for(i = k; i < n; i++)
        {
            if(s[i] == '#')
            {
                count++;
            }
        }

        temp = (n - k - 1) + count;
        if(temp < n)
        {
            cout << "JAY" << endl;
        }
        else
        {
            cout << "JEFF" << endl;
        }
    }

return 0;
}