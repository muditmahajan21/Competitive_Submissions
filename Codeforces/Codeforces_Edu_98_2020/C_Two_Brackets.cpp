
#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

ll solve(string str)
{
    ll count = 0, i, n = str.size(), j;
    /*
    for(i = 0; i < n; i++)
    {   
        if(str[i] == '(')
        {
            for(j = i + 1; j < n; j++)
            {
                if(str[j] == ')')
                {
                    count++;
                    str[j] = '_';
                    break;
                }
            }
        }
        else  if(str[i] == '[')
        {
            for(j = i + 1; j < n; j++)
            {
                if(str[j] == ']')
                {
                    count++;
                    str[j] = '_';
                    break;
                }
            }
        }
    }
    return count;
    */
    stack<char> s1, s2;

    for(i = 0; i < n ; i++)
    {
        if(str[i] == '(')
        {
            s1.push(str[i]);
        }
        else if(str[i] == '[')
        {
            s2.push(str[i]);
        }
        else if(str[i] == ')')
        {
            if(!s1.empty())
            {
                s1.pop();
                count++;
            }
        }
        else if(str[i] == ']')
        {
            if(!s2.empty())
            {
                s2.pop();
                count++;
            }
        }
    }
    return count;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0;
        string str;
        cin >> str;

        n = str.size();

        ans = solve(str);
        
        cout << ans << endl;
    }

return 0;
}
