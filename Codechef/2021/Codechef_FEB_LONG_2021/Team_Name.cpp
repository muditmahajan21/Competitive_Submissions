#include "bits/stdc++.h"
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
        string s, sub;
        char t;
        map<string, set<char>> dict;
        vector<char> temp_vec;

        for(i = 0; i < n; i++)
        {
            cin >> s;
            sub = s.substr(1);
            t = s[0];
            dict[sub].insert(t);
        }

        for(auto i_it = dict.begin(); i_it != dict.end(); i_it++)
        {
            for(auto j_it = dict.begin(); j_it != dict.end(); j_it++)
            {   
                if(i_it != j_it)
                {
                    temp_vec.clear();
                    set_union(i_it -> second.begin(), i_it -> second.end(), j_it -> second.begin(), j_it -> second.end(), back_inserter(temp_vec));
                    temp = temp_vec.size() - i_it -> second.size();
                    k = (temp_vec.size() - j_it -> second.size());
                    ans += temp * k;
                }
            }
        }

        cout << ans << endl;
    }

return 0;
}
