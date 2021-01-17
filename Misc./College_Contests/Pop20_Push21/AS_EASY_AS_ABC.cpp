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
    ll a = -1, b = -1, c = -1;

    a = s.find_first_of('a');
    b = s.find_first_of('b');
    c = s.find_first_of('c');

    i = s.find_last_of('a');
    j = s.find_last_of('b');
    k = s.find_last_of('c');

    temp = -1;

    if(a != -1)
    {
        if(j != -1)
        {
            temp = max(temp, abs(a - j));
        }
        if(k != -1)
        {
            temp = max(temp, abs(a - k));
        }
    }
    if(b != -1)
    {
        if(i != -1)
        {
            temp = max(temp, abs(b - i));
        }
        if(k != -1)
        {
            temp = max(temp, abs(b - k));
        }
    }
    if(c != -1)
    {
        if(i != -1)
        {
            temp = max(temp, abs(c - i));
        }
        if(j != -1)
        {
            temp = max(temp, abs(c - j));
        }
    }

    cout << temp << endl;
return 0;
}
