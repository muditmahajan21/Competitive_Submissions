#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0, upper = 0, lower = 0;
    string s;
    cin >> s; 

    for(i = 0 ; i < s.size(); i++)
    {
        if(s[i] >= 65 && s[i] <= 90)
        {
            upper++;
        }
        else  
        {
            lower++;
        }
    }

    if(upper > lower)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else  
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }
    cout << s << endl;  
    
return 0;
}
