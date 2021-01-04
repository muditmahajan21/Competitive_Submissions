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
    string s;
    cin >> s;

    unordered_set<char> se;

    for(i = 0; i< s.size(); i++)
    {
        se.insert(s[i]);
    }

    n = se.size();

    if(n % 2 == 0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else  
    {
        cout << "IGNORE HIM!" << endl;
    }

return 0;
}
