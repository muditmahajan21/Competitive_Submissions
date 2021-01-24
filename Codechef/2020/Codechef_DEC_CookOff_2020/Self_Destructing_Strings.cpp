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
        ll i, j, k, n, temp, count0 = 0, count1 = 0, sum = 0;
        string str;
        cin >> str;
        n = str.size();
        if(n % 2 != 0)
        {
            cout << "-1" << endl;
            continue;
        }

        for(i = 0; i < n; i++)
        {
            if(str[i] == '0')
            {
                count0++;
            }
            else  
            {
                count1++;
            }
        }

        if(count0 == n || count1 == n)
        {
            cout << "-1" << endl;
            continue;
        }
        else  
        {
            temp = abs(count0 - count1);
            temp /= 2;
            cout << temp << endl;
        }
    }

return 0;
}
