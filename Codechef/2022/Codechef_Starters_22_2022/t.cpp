#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int solve (int n,vector<int> &A,int x,int k)
    {
        int i = 1;
        priority_queue<int> pq;
        while(i < n and (k || x > 0)) {
            while(i < n and x >= 0) {
                int diff = abs(A[i] - A[i-1]);
                x -= diff;
                pq.push(diff);
                i++;
            }
            while(k and x < 0 and !pq.empty()) {
                x += pq.top();
                pq.pop();
                k--;
            }
        }

        if(x < 0) i--;
        return i;
    }
};


// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    string ss;
    while (t-- > 0) {
        int n,x,k;
        cin >> n >> x >> k;
		vector<int> A(n);
		for(int i = 0; i<n; i++)cin >> A[i];
        Solution obj;
        int ans = obj.solve (n, A,x,k);
        cout << ans << "\n";
    }
    return 0;
}