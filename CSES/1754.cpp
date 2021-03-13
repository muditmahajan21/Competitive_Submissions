#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
        ll test;
        cin >> test;
        while(test--)
        {
                ll a, b, sum, min_ele, temp;
                cin >> a >> b;
                sum = a + b;
                if(sum % 3 != 0)
                {
                        cout << "NO" << endl;
                }
                else 
                {
                        temp = sum / 3;
                        min_ele = min(a, b);
                        if(min_ele >= temp)
                        {
                                cout << "YES" << endl;
                        }
                        else 
                        {
                                cout << "NO" << endl;
                        }
                }
        }
return 0;
}
