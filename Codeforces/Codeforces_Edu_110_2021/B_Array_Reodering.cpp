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
        cin >> n;
        ll arr[n];
        vector<ll> odd_num;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] % 2 == 0)
            {
                count++;
            }
            else
            {
                odd_num.push_back(arr[i]);
            }
        }

        for(i = 0; i < odd_num.size(); i++)
        {
            for(j = i + 1; j < odd_num.size(); j++)
            {
                if(__gcd(odd_num[i], odd_num[j]) > 1)
                {
                    ans++;
                }
            }
        }

        ans += ((count * (count - 1)) / 2); 
        ans += (count * odd_num.size());

        cout << ans << endl;
    }

return 0;
}
