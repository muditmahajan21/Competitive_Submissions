#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n >> k;
    string s;
    cin >> s;

    while(k--)
    {
        for(i = 1; i < n; i++)
        {
            if(s[i] == 'G' && s[i - 1] == 'B')
            {
                s[i] = 'B';
                s[i - 1] = 'G';
                i++;
            }
        }
    }

    cout << s << endl;

return 0;
}
