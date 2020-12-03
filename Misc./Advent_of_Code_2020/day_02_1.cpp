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
        
        for(ll i = 0; i < str.size(); i++)
        {
            if(str[i] == x)
            {
                count++;
            }
        }

        if(count >= left && count <= right)
        {
            ans++;
        } 

    }
    cout << ans << endl;
    return 0;
}