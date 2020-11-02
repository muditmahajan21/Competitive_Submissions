#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>arr;
    int temp, i, count;
    cin >> count;
    while(count--)
    {
        cin >> temp;
        arr.push_back(temp);
    }
    int x, a, b;
    cin >> x;
    cin >> a >> b;

    arr.erase(arr.begin() + x - 1);
    arr.erase(arr.begin() + a - 1, arr.begin() + b - 1);

    cout << arr.size() << endl;

    for(i = 0; i < arr.size() ; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}
