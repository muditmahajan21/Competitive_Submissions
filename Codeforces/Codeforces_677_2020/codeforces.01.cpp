#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int num_of_digits(int num)
{
    int count = 0, temp;
    while(num > 0)
    {
        num = num / 10;
        count++;
    }
    return count;
}

int first(int num)
{
    return num % 10;
}
int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll n;
        cin >> n;

        ll number = num_of_digits(n);

        ll base = first(n);

        ll ans = 0;

        ans += (base - 1) * 10;

        if(number == 1)
            ans += 1;
        else if(number == 2)
            ans += 3;
        else if(number == 3)
            ans += 6;
        else if(number == 4)
            ans += 10;

        cout << ans << endl;
    }

return 0;
}
