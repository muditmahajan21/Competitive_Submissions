#include<bits/stdc++.h>
using namespace std;
#include<list>

int main()
{
    int test;
    cin >> test;
    while(test--)
    {
        int n, d, temp;
        cin >> n >> d;
        vector<int> arr;
        
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            arr.push_back(temp);
        }

        int maxElement = *std::max_element(arr.begin(), arr.end());

        int freq = count(arr.begin(), arr.end(), maxElement);

        arr.erase(remove(arr.begin(), arr.end(), maxElement), arr.end());

        int maxSecond = *std::max_element(arr.begin(), arr.end());

        float ans = ((float)maxElement - (float)maxSecond + (float)d) / (float)freq;

        cout << fixed << setprecision(10) <<  ans << endl;
    }
return 0;
}