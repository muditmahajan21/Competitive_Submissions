#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    
    ll i, j, k, n, temp, ans = 0, sum = 0;
    cin >> n;
    string s;
    cin >> s;

    i = count(s.begin(),s.end(), 'A');
    j = n - i;

    if(i > j)
    {
        cout << "Anton" << endl;
    }
    else if(j > i)
    {
        cout << "Danik" << endl;
    }
    else  
    {
        cout << "Friendship" << endl;
    }
    
return 0;
}
