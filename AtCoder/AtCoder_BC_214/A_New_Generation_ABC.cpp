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
    
    if(test <= 125)
    {
        cout << 4 << endl;
    }
    else if(test >= 126 and test <= 211)
    {
        cout << 6 << endl;
    }
    else
    {
        cout << 8 << endl;
    }

return 0;
}
