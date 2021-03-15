#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll i, n, t;
        cin >> n;
        set<ll> s;
        for(i = 0; i < n; i++)
        {   
                cin >> t;
                s.insert(t);
        }
        cout << s.size() << endl;
return 0;
}
