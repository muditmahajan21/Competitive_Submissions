#include <bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

bool ok(vector<ll> &req, priority_queue<ll, vector<ll>> &pq)
{
    while(!pq.empty())
    {
        if(pq.top() == req[req.size() - 1])
        {
            pq.pop();
            req.pop_back();
        }
        else if(pq.top() < req[req.size() - 1])
        {
            return false;
        }
        else 
        {
            ll temp = pq.top();
            pq.pop();
            pq.push(temp / 2);
        }
    }
    return true;
}

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
        cin >> n;
        vector<ll> arr(n), req(n);
        priority_queue<ll, vector<ll>> pq;

        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
            req[i] = i + 1;
            pq.push(arr[i]);
        }

        if(ok(req, pq)) 
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

return 0;
}
