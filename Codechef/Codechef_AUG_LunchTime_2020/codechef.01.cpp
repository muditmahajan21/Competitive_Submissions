#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int temp, n;
        cin >> n;

        vector<int> arr;
        
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        vector<int> freq;
        
        for(int i = 1; i <= 10; i++)
        {
            temp = count(arr.begin(), arr.end(), i);
            freq.push_back(temp);
        }

        int maxElement = *std::max_element(freq.begin(), freq.end());

        vector<int> res;

        for(int i = 1; i <= maxElement; i++)
        {
            temp = count(freq.begin(), freq.end(), i);
            res.push_back(temp);
        }

        int maxElementIndex = max_element(res.begin(),res.end()) - res.begin();

        cout << maxElementIndex + 1 << endl;
    }
return 0;
}