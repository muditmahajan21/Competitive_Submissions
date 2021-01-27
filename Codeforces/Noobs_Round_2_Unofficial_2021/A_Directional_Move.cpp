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
        string s;
        cin >> s;

        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
            else  
            {
                ans++;
            }
        }

        ans = ans % 4;
        count = count % 4;

        if(ans == count)
        {
            cout << "E" << endl;
        }
        else if(ans == 0 && count == 0)
        {
            cout << "E" << endl;
        }
        else if(count == 0)
        {
            if(ans == 1)
            {
                cout << "N" << endl;
            }
            else if(ans == 2)
            {
                cout << "W" << endl;
            }
            else 
            {
                cout << "S" <<endl;
            }
        }
        else if(ans == 0)
        {
            if(count == 1)
            {
                cout << "S" << endl;
            }
            else if(count == 2)
            {
                cout << "W" << endl;
            }
            else 
            {
                cout << "N" << endl;
            }
        }
        else 
        {
            if(count > ans)
            {
                count = count - ans;
                if(count == 1)
                {
                    cout << "S" << endl;
                }
                else if(count == 2)
                {
                    cout << "W" << endl;
                }
                else 
                {
                    cout << "N" << endl;
                }
            }
            else 
            {
                ans = ans - count;
                if(ans == 1)
                {
                    cout << "N" << endl;
                }
                else if(ans == 2)
                {
                    cout << "W" << endl;
                }
                else 
                {
                    cout << "S" <<endl;
                }   
            }
        }
    }

return 0;
}
