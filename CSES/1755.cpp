#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        ll i, n;
        string s;
        cin >> s;
        n = s.size();

        ll count_arr[26];
        memset(count_arr, 0, sizeof(count_arr));

        for(i = 0; i < n; ++i)
        {
                count_arr[s[i] - 'A']++;
        }   

        ll odd = 0;

        for(i = 0; i < 26; ++i)
        {
                if(count_arr[i] % 2)
                {
                        odd++;
                }
        }
        
        //cout << odd << endl;

        if(odd > 1)
        {
                cout << "NO SOLUTION" << endl;
        }
        else    
        {
                string result;
                for(i = 0; i < 26; ++i)
                {
                        if(count_arr[i] % 2 == 0)
                        {
                                for(ll j = 0; j < count_arr[i] / 2; ++j)
                                {
                                        result.push_back(i + 'A');
                                }
                        }
                }
                for(i = 0; i < 26; ++i)
                {
                        if(count_arr[i] % 2)
                        {
                                for(ll j = 0; j < count_arr[i]; ++j)
                                {
                                        result.push_back(i + 'A');
                                }
                        }
                }
                for(i = 25; i >= 0; --i)
                {
                        if(count_arr[i] % 2 == 0)
                        {
                                for(ll j = 0; j < count_arr[i] / 2; ++j)
                                {
                                        result.push_back(i + 'A');
                                }
                        }
                }
                cout << result << endl;
        }
return 0;
}
