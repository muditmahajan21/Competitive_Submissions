#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool isPrime(ll n)
{
    // Corner cases
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
  
    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n % 2 == 0 || n % 3 == 0)
        return false;
  
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
  
    return true;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;

        vector<ll> ind;
        vector<ll> left;

        for(i = 0; i < n; i++)
        {
            if(s[i] != c)
            {
                ind.push_back(i + 1);
            }
            else 
            {
                left.push_back(i + 1);
            }
        }

        if(ind.size() == 0)
        {
            cout << 0 << endl;
            continue;
        }
        if(ind.size() == 1)
        {   
            cout << 1 << endl;
            if(ind[0] == n)
            {
                cout << n - 1 << endl;
            }
            else
            {
                cout << n << endl;
            }
            continue;
        }
        bool flag = true;
        if(ind.size() > 1)
        {   
            if(ind.size() == n)
            {
                cout << 2 << endl;
                cout << n - 1 << " " << n << endl;
            }
            
            ll m = left.size();
            reverse(ind.begin(), ind.end());
            
            for(i = 0 ; i < m; i++)
            {
                temp = left[i];
                
                flag = true;
                for(j = 0; j < ind.size(); j++)
                {
                    if(ind[j] % temp == 0)
                    {
                        flag = false;
                        break;
                    }
                    if(ind[j] < temp) 
                    {
                        break;
                    }
                }

                if(flag)
                {
                    cout << 1 << "\n" << temp << "\n";
                    break;
                }
            }

            if(!flag)
            {
                cout << 2 << endl;
                cout << n - 1 << " " << n << endl;
            }
        }
    }

return 0;
}
