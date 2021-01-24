#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, k;
        cin >> n >> k;
        
        string bin;
        cin >> bin;

        int count0 = 0;
        int count1 = 0;

        for(int i = 0; i < n; i++)
        {
            if(bin[i] == '0')
                count0++;
            else if(bin[i] == '1')
                count1++;
        }

        int div = n / k;

        if(count0 % div != 0 || count1 % div != 0)
        {
            cout << "IMPOSSIBLE" << endl;
            continue;
        }
        
        int j, res0 = count0 / div;
        int res1 = count1 / div;

        int counter = 0;

        while(counter < div)
        {
            for(j = 0;j < res0 ; j++)
            {
                cout << '0';
            }
            for(j = 0; j < res1 ; j++)
            {
                cout << '1';
            }
            counter++;

            if(counter < div)
            {
                for(j = 0; j < res1 ; j++)
                {
                    cout << '1';
                }
                for(j = 0;j < res0 ; j++)
                {
                    cout << '0';
                }
                counter++;
            }
        }
        cout << endl;
    }
}