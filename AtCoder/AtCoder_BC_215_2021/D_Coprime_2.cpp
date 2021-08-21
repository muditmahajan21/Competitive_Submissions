#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int test;
    
    int i, j, k, n, temp, ans = 0, sum = 0;
    cin >> n >> k;
    int arr[n];
    
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<bool> numbers(k, true);
    set<int> prime_factors;

    for(i = 0; i < n; i++)
    {
        temp = arr[i];

        for(j = 2; j * j <= temp; j++)
        {
            if(temp % j == 0)
            {
                while(temp % j == 0)
                {
                    temp /= j;
                }
                prime_factors.insert(j);
            }
        }

        if(temp != 1)
        {
            prime_factors.insert(temp);
        }
    }

    for(auto e: prime_factors)
    {
        if(e > 1)
        {
            for(i = e; i <= k; i += e)
            {
                numbers[i - 1] = false;
            }
        }
    }

    ans = count(numbers.begin(), numbers.end(), true);
    cout << ans << endl;
    for(i = 0; i < k; i++)
    {
        if(numbers[i])
        {
            cout << i + 1 << endl;
        }
    }

return 0;
}
