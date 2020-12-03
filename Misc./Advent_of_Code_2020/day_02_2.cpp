#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{   
    ll test = 1000, ans = 0;
    while(test--)
    {
        ll left, right, count = 0;
        char x;
        string str;

        cin >> left >> right >> x >> str;
        
        if (str[left - 1] == x)
        {
            count++;
        }
        if(str[right - 1] == x)
        {
           count++;
        }

        if(count == 1)
        {
           ans++;
        }
    }
    cout << ans << endl;
    return 0;
}