#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
using namespace std;

void output_array(ll arr[], ll n)
{
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

bool is_vowel(char c)
{
    if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
    {
        return true;
    }
    return false;
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int test;
    cin >> test;
    for(int test_case = 1; test_case <= test; test_case++)
    {
        int i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 0;
        string s;
        cin >> s;
        n = s.size();

        ans = INT_MAX;
        for(char c = 'A'; c <= 'Z'; c++)
        {   
            count = 0;
            for(i = 0; i < n; i++)
            {   
                if(c != s[i])
                {
                    bool first = is_vowel(c);
                    bool second = is_vowel(s[i]);
                    if(first and second || !first and !second)
                    {
                        count += 2;
                    }
                    else
                    {
                        count++;
                    }
                }
            }
            ans = min(count, ans);
        }

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}