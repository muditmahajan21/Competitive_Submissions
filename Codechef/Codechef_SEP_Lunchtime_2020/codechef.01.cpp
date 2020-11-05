#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, temp, i, flag = 0;
        cin >> n;
        vector<int> v;
        for (i = 0; i < n; i++)
        {
            cin >> temp;
            v.push_back(temp);
        }
        int test_sum = accumulate(v.begin(), v.end(), 0);
        if(test_sum > 0 )
        {
            flag = 1;
        }  
        if(flag == 1)
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << endl;
        }
    }
return 0;
}
