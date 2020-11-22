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
        string a, b;

        cin >> a;
        cin >> b;
    
        n = a.size();

        if(a == b)
        {
            ans = 0;
        }

        else  
        {    
            for(i = 0; i < n; i++)
            {
                if(a[i] != b[i])
                {
                    for(j = i; j < n; j += 2)
                    {
                        if(a[j] == b[j])
                        {
                            break;
                        }
                        else  
                        {
                            if(a[j] == '0') 
                                a[j] = '1';
                            else  
                                a[j] = '0';
                        }
                    }
                    count++;
                }
            }
        }

        ans = count;

        cout << ans << endl;
    }

return 0;
}
