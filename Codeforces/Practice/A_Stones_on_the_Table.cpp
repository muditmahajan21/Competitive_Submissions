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
    cin >> n;
    string s;
    cin >> s;

    for(i = 0; i < n - 1; i++)
    {
        if(s[i]== s[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

return 0;
}
