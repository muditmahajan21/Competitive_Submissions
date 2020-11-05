#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int city, i, n, k, x, y;
        cin >> n >> k >> x >> y;

        city = x;

        do 
        {
            if(x == y)
            {
                cout << "YES" << endl;
                break;
            }
            x = (x + k) % n;
            if(city == x)
            {
                cout << "NO" << endl;
                break;
            }
        }while(1);
    }
return 0;   
}