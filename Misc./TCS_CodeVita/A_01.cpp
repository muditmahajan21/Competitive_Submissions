#include <bits/stdc++.h>
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s, c;
    getline(cin, s);
    getline(cin, c);

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(c.begin(), c.end(), c.begin(), ::tolower);

    int n = s.size();
    int m = c.size();

    string t = "";
    
    vector<string> all;

    for(int i = 0; i < m; i++) 
    {
        if(c[i] == ' ')
        {
            all.push_back(t);
            t = "";
        }
        else 
        {
            t.push_back(c[i]);
        }
    }

    all.push_back(t);

    bool flag = false;

    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1 ; j < n; j++) 
        {
            if(s[i] == s[j]) 
            {
                flag = true;
                break;
            }
        }
    }

    if(flag) 
    {
        cout << "New Language Error";
    }
    else
    {       
        string ans = "";
        int all_s = all.size();
        for(int si = 0; si < all_s; si++) 
        {
            string temp1 = "";
            int e_s = all[si].size();
            for(int i = 0; i < n; i++)
            {   
                for(int j = 0; j < e_s; j++) 
                {
                    if(s[i] == all[si][j]) 
                    {
                        temp1 += s[i];
                    }
                }
            }
            ans += temp1;
            
            ans += ' ';

        }

        int a = ans.size();
        for(int i = 0; i < a - 1; i++) 
        {
            cout << ans[i];
        }
    }

return 0;
}

