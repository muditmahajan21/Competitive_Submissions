#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;

bool areBracketsBalanced(string expr) 
{   
    stack<char> s; 
    char x; 
    ll i;
    
    for ( i = 0; i < expr.length(); i++)  
    { 
        if (expr[i] == '(' || expr[i] == '['
            || expr[i] == '{')  
        { 
            
            s.push(expr[i]); 
            continue; 
        } 
  
        
        
        
        if (s.empty()) 
            return false; 
  
        switch (expr[i]) { 
        case ')': 
              
            
            x = s.top(); 
            s.pop(); 
            if (x == '{' || x == '[') 
                return false; 
            break; 
  
        case '}': 
  
            
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '[') 
                return false; 
            break; 
  
        case ']': 
  
            
            x = s.top(); 
            s.pop(); 
            if (x == '(' || x == '{') 
                return false; 
            break; 
        } 
    } 
  
    
    return (s.empty()); 
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
        string s, s1, s2;
        ll a = 0, b = 0, c = 0;
        cin >> s;
        n = s.size();

        s1 = s;
        s2 = s;

        for(i = 0; i < n; i++)
        {
            if(s[i] == 'A')
            {
                a++;
            }
            else if(s[i] == 'B')
            {
                b++;
            }
            else
            {
                c++;
            }
        }

        if(a >= b && a >= c)
        {
            if(a == b + c)
            {
                ans = 1;
                j = a;
                k = b + c;

                for(i = 0; i < n; i++)
                {
                    if(s[i] == 'A')
                    {
                        s1[i] = '(';
                    }
                    else
                    {
                        s1[i] = ')';
                    }
                }
                for(i = 0; i < n; i++)
                {
                    if(s[i] == 'A')
                    {
                        s2[i] = ')';
                    }
                    else
                    {
                        s2[i] = '(';
                    }
                }
            }
        }
        else if(b >= a&& b >= c)
        {
            if(b == a + c)
            {
                ans = 1;
                j = b;
                k = a + c;

                for(i = 0; i < n; i++)
                {
                    if(s[i] == 'B')
                    {
                        s1[i] = '(';
                    }
                    else
                    {
                        s1[i] = ')';
                    }
                }
                for(i = 0; i < n; i++)
                {
                    if(s[i] == 'B')
                    {
                        s2[i] = ')';
                    }
                    else
                    {
                        s2[i] = '(';
                    }
                }
            }
        }
        else if(c >= a && c >= b)
        {
            if(c == a + b)
            {
                ans = 1;
                j = c;
                k = b + a;

                for(i = 0; i < n; i++)
                {
                    if(s[i] == 'C')
                    {
                        s1[i] = '(';
                    }
                    else
                    {
                        s1[i] = ')';
                    }
                }
                for(i = 0; i < n; i++)
                {
                    if(s[i] == 'C')
                    {
                        s2[i] = ')';
                    }
                    else
                    {
                        s2[i] = '(';
                    }
                }
            }
        }

        if(ans == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(areBracketsBalanced(s1) || areBracketsBalanced(s2))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

return 0;
}
