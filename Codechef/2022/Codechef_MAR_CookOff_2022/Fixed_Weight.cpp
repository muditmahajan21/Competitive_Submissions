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
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n >> k;

        for(i = 1; i <= n; i++) {
            if(k % i == 0) {
                if(k / i <= n and k / i <= (n - i + 1)) {
                    ans = 1;
                    break;
                }
            }
        }

        if(!ans) cout << "NO";
        else cout << "YES";
        cout << endl;
    }

return 0;
}

