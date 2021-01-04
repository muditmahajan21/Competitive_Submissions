#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;

    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    string num;
    bool flag = true;
    cin >> num;

    for(i = 0 ; i < num.size(); i++)
    {
        if(num[i] == '4' || num[i] == '7')
        {
            count++;
        }
    }    
    
    if(count == 0)
    {
        cout << "NO" << endl;
        return 0;
    }

    while(count > 0)
    {
        temp = count % 10;
        if(temp != 7 && temp != 4)
        {
            flag = false;
            break;
        }
        count /= 10;
    }

    if(flag)
    {
        cout << "YES" << endl;
    }
    else  
    {
        cout << "NO" << endl;
    } 

return 0;
}
