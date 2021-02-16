#include "bits/stdc++.h"
#define endl "\n"
using namespace std;

int minOperations(int a[], int n, int m)
{
    int k = n / m;
 
    vector<vector<int> > val(m);
    for (int i = 0; i < n; ++i) {
        val[a[i] % m].push_back(i);
    }
 
    int ans = 0;
    vector<pair<int, int> > extra;
 
    for (int i = 0; i < 2 * m; ++i) {
        int cur = i % m;
 
        while (int(val[cur].size()) > k) {
            int elem = val[cur].back();
            val[cur].pop_back();
            extra.push_back(make_pair(elem, i));
        }
 
       
        while (int(val[cur].size()) < k && !extra.empty()) {
            int elem = extra.back().first;
            int mmod = extra.back().second;
            extra.pop_back();
            val[cur].push_back(elem);
            ans += i - mmod;
        }
    }
 
    return ans;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    int test;
    cin >> test;
    while(test--)
    {
        int i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        int arr[n];
        int c0 = 0, c1 = 0, c2 = 0;
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        temp = minOperations(arr, n, 3);

        cout << temp << endl;
    }

return 0;
}
