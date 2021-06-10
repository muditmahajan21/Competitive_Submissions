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
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        string s, a;
        cin >> s;

        a = "abcdefghijklmnopqrstuvwxyz";

        map<char, ll> m;

        for(auto c: a)
        {
            m[c] = 0;
        }
        for(auto c: s)
        {
            m[c]++;
        }

        for(auto e: m)
        {
            if(e.second == 0)
            {
                cout << e.first << endl;
                ans = 1;
                break;
            }
        }

        if(ans)
        {
            continue;
        }
        else
        {
            string answer = "a";

            while(s.find(answer) != string::npos)
            {   
                temp = answer.size();
                while(answer[temp - 1] == 'z')
                {   
                    if(temp == 0)break;
                    temp--;
                }

                if(!temp)
                {
                    string t = "";
                    for(i = 0; i < answer.size() + 1; i++)t += 'a';
                    answer = t;
                }
                else
                {
                    answer[temp - 1]++;
                    for(i = temp; i < answer.size(); i++)
                    {
                        answer[i] = 'a';
                    }
                }
            }

            cout << answer << endl;
        }
    }

return 0;
}
