#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    ll right = 0, ans = 0;
    while(cin >> str)
    {
        if(str[right] == '#')
        {
            ans++;
        }
        right += 3;
        if(right >= str.size())
        {
            right = right - str.size();
        }
    }
    cout << ans << endl;

return 0;
}
