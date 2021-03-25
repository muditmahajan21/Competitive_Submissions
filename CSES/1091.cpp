#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{
        ll n, m;
        cin >> n >> m;
        multiset<int, greater<int>> arr;
        ll i, temp;
        for(i = 0; i < n; i++)
        {
                cin >> temp;
                arr.insert(temp);
        }
        
        for(i = 0; i < m; i++)
        {
                cin >> temp;
                auto it = arr.lower_bound(temp);
                if(it == arr.end())
                {
                        cout << "-1" << endl;
                }
                else 
                {
                        cout << *it << endl;
                        arr.erase(it);
                }
        }
return 0;
}
