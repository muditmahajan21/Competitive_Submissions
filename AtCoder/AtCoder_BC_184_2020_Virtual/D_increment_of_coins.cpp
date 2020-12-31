#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

double dp[101][101][101];

double func(int a, int b, int c)
{
    if(dp[a][b][c])
    {
        return dp[a][b][c];
    }
    if(a == 100 || b == 100 || c == 100)
    {
        return 0;
    }
    double ans = 0;

    ans += (func(a + 1, b, c) + 1) * a / (a + b + c);
    ans += (func(a, b + 1, c) + 1) * b / (a + b + c);
    ans += (func(a, b, c + 1) + 1) * c / (a + b + c);

    dp[a][b][c] = ans;

    return ans;
}

int main()
{   
    int test;
    
        int i, j, k, n, temp, count = 0, sum = 0;
        int a, b, c;
        double ans = 0;

        cin >> a >> b >> c;

        ans = func(a, b, c);

        printf("%.9f", ans);

return 0;
}
