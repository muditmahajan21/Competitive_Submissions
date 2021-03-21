#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

void recur(int x, int y, int z, int n)
{
        if(n == 0)
        {
                return;
        }
        recur(x, z, y, n - 1);
        cout << x << " " << z << endl;
        recur(y, x, z, n - 1);
}

int main()
{
        int n;
        cin >> n;
        int k = pow(2, n) - 1;
        cout << k << endl;
        recur(1, 2, 3, n);
return 0;
}
