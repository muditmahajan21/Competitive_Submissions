#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    string s;
    cin >> s >> k;

    sort(s.begin(), s.end());
    k--;
    while(k--)
    {
        next_permutation(s.begin(), s.end());
    }
    cout << s << endl;

return 0;
}
