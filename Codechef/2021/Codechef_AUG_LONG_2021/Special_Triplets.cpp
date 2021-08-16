#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        int test;
        cin >> test;
        while(test--)
        {
                int a, b, c, ans = 0, n;
                cin >> n;

                for(c = 1; c <= n; c++)
                {
                        for(b = c; b <= n; b += c)
                        {
                                if(b % c == 0)
                                {
                                        for(a = c; a <= n; a += b)
                                        {
                                                if(a % b == c)
                                                {
                                                        ans++;
                                                }
                                        }
                                }
                        }
                }

                cout << ans << endl;
        }
        return 0;
}
