#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll search_index(vector<ll> v, ll n, ll X, ll p)
{   
    ll min = n, min_to_p = 0;
    for(ll i = 0; i < n; i++)
    {
        if(v[i] == X)
        {
            if(abs(p - i) < min)
            {
                min = abs(p - i);
                min_to_p = i;
            }
        }
    }
    return min_to_p;
}

int main()
{
    ll test;
    cin >> test;
    while(test--)
    {
        ll temp, i, n, X, p, k, index, ans = 0, count = 0;
        cin >> n >> X >> p >> k;            
        vector<ll> v;

        for(i = 0 ; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);          
        }

        sort(v.begin(), v.end());       

        index = search_index(v, n, X, p);

        if(v[index] != X)
        {
            v[k - 1] = X;
            sort(v.begin(), v.end());
            ++count;
        }

        if(v[p - 1] == X)
        {
            ans = count;
            cout << ans << endl;
            continue;
        }

        if((p > k && v[p - 1] > X) || (p < k && v[p - 1] < X))
        {
            ans = -1;
            cout << ans << endl;
            continue;
        }    

        index = search_index(v, n, X, p);

        ans = abs((p - 1) - index) + count;
        cout << ans << endl;
    }
return 0;
}