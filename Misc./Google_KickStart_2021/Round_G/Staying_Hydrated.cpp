#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
const ll MOD = 1e9 + 7;
using namespace std;

void output_array(ll arr[], ll n)
{
    for(ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    for(ll test_case = 1; test_case <= test; test_case++)
    {
        ll i, j, k, n, m, temp = 0, count = 0, ans = 0, sum = 0;
        cin >> n;
        vector<vector<ll>> coord(n);

        for(i = 0; i < n; i++)
        {   
            vector<ll> t(4);
            for(j = 0; j < 4; j++)
            {
                cin >> t[j];
            }
            coord[i] = t;
        }

        ans = LONG_LONG_MAX;
        ll x_ans = 0;
        ll y_ans = 0;
        ll min_x = LONG_LONG_MAX;
        ll min_y = LONG_LONG_MAX;

        for(i = 0; i < n; i++)
        {
            sum = 0;
            count = 0;

            ll a = coord[i][0], b = coord[i][1], x = coord[i][2], y = coord[i][3];

            min_x = min(min_x, a);
            min_x = min(min_x, x);
            min_y = min(min_y, b);
            min_y = min(min_y, y);

            for(j = 0; j < n; j++)
            {   
                ll c = coord[j][0];
                ll d = coord[j][1];

                ll e = coord[j][2];
                ll f = coord[j][3];

                min_x = min(min_x, c);
                min_x = min(min_x, e);
                min_y = min(min_y, d);
                min_y = min(min_y, f);

                if(i != j)
                {
                    sum += min(abs(a - c) + abs(b - d), abs(a - e) + abs(b - f));
                    count += min(abs(x - c) + abs(y - d), abs(x - e) + abs(y - f));
                }
            }
            if(min(count, sum) < ans)
            {
                ans = min(count, sum);
                if(sum <= count)
                {
                    x_ans = a;
                    y_ans = b;
                }
                else
                {
                    x_ans = x;
                    y_ans = y;
                }
            }
        }

        for(ll temp_x = x_ans; temp_x >= min_x; temp_x--)
        {
            sum = 0;
            count = 0;

            for(j = 0; j < n; j++)
            {   
                ll c = coord[j][0];
                ll d = coord[j][1];

                ll e = coord[j][2];
                ll f = coord[j][3];

                sum += min(abs(temp_x - c) + abs(y_ans - d), abs(temp_x - e) + abs(y_ans - f));
                count += min(abs(temp_x - c) + abs(y_ans - d), abs(temp_x - e) + abs(y_ans - f));
            }
            if(min(count, sum) < ans)
            {
                ans = min(count, sum);
                if(sum <= count)
                {
                    x_ans = temp_x;
                }
                else
                {
                    x_ans = temp_x;
                }
            }
        }

        for(ll temp_y = y_ans; temp_y >= min_y; temp_y--)
        {
            sum = 0;
            count = 0;

            for(j = 0; j < n; j++)
            {   
                ll c = coord[j][0];
                ll d = coord[j][1];

                ll e = coord[j][2];
                ll f = coord[j][3];

                sum += min(abs(x_ans - temp_y) + abs(temp_y - d), abs(x_ans - e) + abs(temp_y - f));
                count += min(abs(x_ans - c) + abs(temp_y - d), abs(x_ans - e) + abs(temp_y - f));
            }
            if(min(count, sum) == ans)
            {
                ans = min(count, sum);
                if(sum <= count)
                {
                    y_ans = temp_y;
                }
                else
                {
                    y_ans = temp_y;
                }
            }
        }

        cout << "Case #" << test_case << ": " << x_ans << " " << y_ans;
        cout << endl;
    }
return 0;
}