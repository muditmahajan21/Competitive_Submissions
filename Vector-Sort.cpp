#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    vector<int> arr;
    int size, temp, i;
    cin >> size;

    while(size--)
    {   
        cin >> temp;
        arr.push_back(temp);
    }  

    sort(arr.begin(), arr.end());

    for(i = 0; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}
