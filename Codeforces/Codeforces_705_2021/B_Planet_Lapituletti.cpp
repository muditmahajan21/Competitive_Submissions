
#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;


bool check(int h, int m, int hour, int minutes)
{   
    map<char, char> convert = { 
    {'1', '1'},
      {'0', '0'},
      {'2', '5'}, 
      {'5', '2'},
      {'8', '8'},
    };    
    
    string sh, sm;
    sh = to_string(h);
    sm = to_string(m);
    
    
    int i;
    while(sh.size() <= 1)
    {
        sh = '0' + sh;
    }
    while(sm.size() <= 1)
    {
        sm = '0' + sm;
    }

    
    for(i = 0; i < sm.size(); i++)
    {
        if(!convert.count(sm[i]))
        {
            return false;
        }
    }
    for(i = 0; i < sh.size(); i++)
    {
        if(!convert.count(sh[i]))
        {
            return false;
        }
    }
    
    
    reverse(sh.begin(), sh.end());
    reverse(sm.begin(), sm.end());
    
    for(i = 0; i < sh.size(); i++)
    {
        sh[i] = convert[sh[i]];
        sm[i] = convert[sm[i]];
    }
    
    
    int ch, cm;
    ch = stoi(sm);
    cm = stoi(sh);
   
    
    if(ch >= 0 && ch < hour && cm >= 0 && cm < minutes)
    {
        return true;
    }
    
    return false;
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    while(test--)
    {
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        int h, m, sh, sm;
        string s;
        cin >> h >> m;
        cin >> s;

        string cop = s;
        sh = stoi(s.substr(0, 2));
        sm = stoi(s.substr(3, 2));

        i = sh;
        j = sm;

        
        while(!check(i, j, h, m))
        {
            j++;
            if(j == m)
            {
                j %= m;
                ++i;
            }
            i %= h;
        }
        
        if(i <= 9)
        {
            cout << 0 << i << ":";
        }
        else
        {
            cout << i << ":";
        }

        if(j <= 9)
        {
            cout << 0 << j << endl;
        }
        else
        {
            cout << j << endl;
        }
    }
return 0;
}
