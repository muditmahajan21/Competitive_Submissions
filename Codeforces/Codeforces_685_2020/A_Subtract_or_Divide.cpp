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
        cin >> n;

        /*
        3 is a special case so needs to be handled alone.
        Else:
        if a number is even e.g: 78, then its largest divisor would be 34
        and n will become 78 / 34 = 2, 
        which can be reduced to 1 by subtracting 1 and 
        answer is 2 moves.
        
        if a number is odd, then by one move it can be made even by 
        subtracting 1 and then 2 moves to make even number reduced to 1.
        */


        if(n == 3)
        {
            ans = 2;
        }
        else if(n > 2)
        {
            if (n % 2 == 0)
            {
                ans = 2;
            }
            else  
            {
                ans = 3;
            }
        }
        else  if(n == 1)
        {
            ans = 0;
        }
        else  
        {
            ans = 1;
        }

        cout << ans << endl;
    }

return 0;
}
