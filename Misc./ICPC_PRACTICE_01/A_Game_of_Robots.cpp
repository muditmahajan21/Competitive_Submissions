#include <bits/stdc++.h>
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
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        string s;
        cin >> s;
        n = s.size();

        ll arr[n];
        for(i = 0; i < n; i++)
        {
            if(s[i] == '.')
            {
                arr[i] = -1;
            }
            else 
            {
                arr[i] = s[i] - '0';
            }
        }

        for(i = 0; i < n; i++)
        {
            for(j = i + 1; j < n; j++)
            {
                if(arr[i] != -1 and arr[j] != -1)
                {
                    temp = (arr[j] + arr[i]);
                    sum = (j - i);

                    if(temp >= sum)
                    {
                        ans = 1;
                        break;
                    }
                }
            }
            if(ans) 
            {
                break;
            }
        }

        if(ans)
        {
            cout << "unsafe" << endl;
        }
        else
        {
            cout << "safe" << endl;
        }
    }

return 0;
}

/*
. 2 . . . 2 . . 
  1       5
. 2 2 2|4 4 2 . . 
*/