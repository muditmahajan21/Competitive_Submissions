#include "bits/stdc++.h"
using namespace std;

int main()
{
        int n, i, j, k;
        cin >> n;
        vector<pair<int, int>> arr;
        for(i = 0; i < n; i++)
        {
                cin >> j >> k;
                arr.push_back( {k, j}  );
        }
        sort(arr.begin(), arr.end());
        int ans = 0, end = 0;
        for(auto e: arr)
        {
                if(e.second >= end)
                {
                        end = e.first;
                        ans++;
                }
        }
        cout << ans << endl;
return 0;
}
