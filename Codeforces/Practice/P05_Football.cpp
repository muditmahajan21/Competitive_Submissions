#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s; 
    
    if((s.find("0000000") != string::npos) || (s.find("1111111") != string::npos)) 
    {
        cout << "YES" << endl;
    }
    else 
    {
        cout << "NO" << endl;
    }

return 0;
}
