#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>     
#define ll long long int
#define endl "\n"
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    cin >> test;
    for(int test_case = 1; test_case <= test; test_case++)
    {
        int i, j, k, d, n, m, temp = 0, count = 0, ans = 0, sum = 0;
        cin >> d >> n >> k;

        int left, right;
        vector<int> days[d];
        for(i = 0; i < n; i++)
        {
            cin >> temp >> left >> right;
            left--;right--;
            for(j = left; j <= right; j++)
            {
                days[j].emplace_back(temp);
            }
        }

        for(auto e: days)
        {
            sort(e.begin(), e.end(), greater<int>());
            temp = 0;
            temp = accumulate(e.begin(), e.begin() + min((int)e.size(), k), temp);
            ans = max(ans, temp);
        }

        cout << "Case #" << test_case << ": " << ans;
        cout << endl;
    }
return 0;
}