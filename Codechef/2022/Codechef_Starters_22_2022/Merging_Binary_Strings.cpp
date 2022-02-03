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
        string a, b;
        cin >> a;
        cin >> b;

        vector<ll> pref_a(n);
        vector<ll> pref_b(n);

        for(i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(a[i] == '1') pref_a[i] = 1;
            }
            else
            {
                if(a[i] == '1') pref_a[i] = pref_a[i - 1] + 1;
                else pref_a[i] = pref_a[i - 1];
            }
        }
        for(i = 0; i < n; i++)
        {
            if(i == 0)
            {
                if(b[i] == '1') pref_b[i] = 1;
            }
            else
            {
                if(b[i] == '1') pref_b[i] = pref_b[i - 1] + 1;
                else pref_b[i] = pref_b[i - 1];
            }
        }

        for(i = 0; i < n; i++)cout << pref_a[i] << " ";
        cout << endl;
        for(i = 0; i < n; i++)cout << pref_b[i] << " ";
        cout << endl;

        for(i = 0; i < n; i++)
        {
            if(a[i] == '1') 
            {
                j = i;
                break;
            }
        }
        for(i = 0; i < n; i++)
        {
            if(b[i] == '1')
            {
                k = i;
                break;
            }
        }

        for(i = max(j, k); i < n; i++)
        {   
            if(a[i] == '1' and b[i] == '1') ans += (n - 1);
            else ans += (n);
        }

        cout << ans / 2 << endl;
    }

return 0;
}


