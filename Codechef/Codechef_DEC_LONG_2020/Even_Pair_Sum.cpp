#include<bits/stdc++.h>
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
        ll even_count_b = 0, even_count_a = 0, odd_count_a = 0, odd_count_b = 0, a, b, i, j, k, n, temp, count = 0, ans = 0;
        cin >> a >> b;

        even_count_a = a / 2;
        odd_count_a = (a + 1) / 2;

        even_count_b = b / 2;
        odd_count_b = (b + 1) / 2;

        ans = even_count_a * even_count_b + odd_count_a * odd_count_b;
        
        cout << ans << endl;
    }

return 0;
}
