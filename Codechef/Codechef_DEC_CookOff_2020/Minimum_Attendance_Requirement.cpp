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
        cin >> n;
        string str;
        cin >> str;

        for(i = 0; i < n; i++)
        {
            if(str[i] == '1')
            {
                count++;
            }
        }

        count += (120 - n);

        if(count >= 90)
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
