#include<bits/stdc++.h>
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
        ll i, j, k, n, temp, count = 0, ans = 0;
        bool plus = false, minus = false, star = false;
        string s, str;
        cin >> n;
        ll arr[n];

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

    

        cin >> s;

        for(i = 0; i < s.size(); i++)
        {
            if(s[i] == '+')
            {
                plus = true;
            }
            if(s[i] == '-')
            {
                minus = true;
            }
            if(s[i] == '*')
            {
                star = true;
            }
        }

        j = 1;

        for(i = 0; i < n - 1; i++)
        {
            if(arr[i] == 0 || arr[j] == 0)
            {   
                cout << arr[i];
                if(plus)
                    cout << '+';
                else if(minus)
                    cout << '-';
                else  
                    cout << '*';
                cout << arr[j];
                j++;
            }
            else if(arr[i] == 1 || arr[j] == 1)
            {   
                cout << arr[i];
                if(plus)
                    cout << '+';
                else if(star)
                    cout << '-';
                else  
                    cout << '*';
                cout << arr[j];
                j++;
            }
            else  
            {   
                cout << arr[i];
                if(star)
                    cout << '+';
                else if(plus)
                    cout << '-';
                else  
                    cout << '*';
                cout << arr[j];
                j++;
            }
            if(j > n)
            {
                break;
            }
        }
        /*
        for(i = 0; i < n; i++)
        {
            //cout << arr[i] << str[i] ;
        }
        cout << str << endl;
        */
        cout << endl;

    }

return 0;
}
