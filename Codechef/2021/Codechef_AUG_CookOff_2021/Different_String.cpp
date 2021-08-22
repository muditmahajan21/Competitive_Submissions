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
        cin >> n;
        vector<string> arr;
        string s;
        for(i = 0; i < n; i++)
        {
            cin >> s;
            arr.push_back(s);
        }

        string res = "";
        for(i = 0; i < n; i++)
        {
            if(arr[i][i] == '0')
            {
                res += '1';
            }
            else
            {
                res += '0';
            }
        }

        cout << res << endl;
    }

return 0;
}
