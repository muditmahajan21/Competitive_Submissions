#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    while(test--)
    {
        int temp, n, k, count = 0;
        cin >> n >> k;

        vector<int> arr;

        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        int max = *max_element(arr.begin(), arr.end());

        if(max > k)
        {
            cout << "-1\n";
            continue;
        }

        else 
        {   
            int j = 0;
            while(j < arr.size())
            {
                int s = 0;
                while(s <= k)
                {
                    s = s + arr[j] ;
                    if (s <= k)
                        j++;
                }
                count++;
            }
        }

        cout << count << endl;
    }
}