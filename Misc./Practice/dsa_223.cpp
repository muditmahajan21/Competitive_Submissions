#include "bits/stdc++.h"
using namespace std;

int main()
{
    int deno[] = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 };
    int n;
    cin >> n;

    vector<int> ans;
    for(int i = 8; i >= 0; i--)
    {
        while(n >= deno[i])
        {
            n -= deno[i];
            ans.push_back(deno[i]);
        }
    }

    for(auto e: ans) cout << e << " ";
    cout << endl;

    return 0;
}