#include "bits/stdc++.h"
using namespace std;

int main()
{
    int i, n = 26;
    int temp;
    for(i = 0; i < n; i++)
    {
        cin >> temp;
        temp--;
        char ch = 'a' + temp;
        cout << ch;
    }
    return 0;
}