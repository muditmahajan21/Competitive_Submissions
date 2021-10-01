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
        string s;
        cin >> s;

        i = count(s.begin(), s.end(), 'A');
        j = count(s.begin(), s.end(), 'B');
        k = count(s.begin(), s.end(), 'C');
        //cerr << i << " " << j << " " << k << endl;
        if(i + k == j)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
return 0;
}
