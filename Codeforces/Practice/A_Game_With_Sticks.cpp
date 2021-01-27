#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
    ll n, m, temp;
    cin >> n >> m;
    temp = min(n, m);

    if(temp % 2 == 0)
    {
            cout << "Malvika" << endl;
    }
    else  
    {
            cout << "Akshat" << endl;
    }
return 0;
}
