// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++
class Solution{
    public:
    int solve (int N,vector<int> &A,int X,int K)
    {   
        vector<int> diff(N - 1);
        for(int i = 1; i < N; i++) {
            diff[i - 1] = A[i] - A[i - 1];
        }
        int j = 1;
        int t = 0;
        for(int i = 0; i < N - 1; i++) {
            X -= diff[i]; 
            if(X < 0) break;
            j++;
        }
        cout << j << " ";
        if(j == N) return j;
        if(j + K >= N) return N;
        j += K;
        cout << j << " \n";
        sort(diff.begin(), diff.begin() + j);
        //for(int i = 0; i < j; i++) cout << diff[i] << " ";
        
        for(int i = j - 1, c = 0; c < K; c++, i--) {
            t += diff[i];
        }
        
        cout << K << " " << t << " \n";
        for(int i = j; i < N - 1; i++) {
            t -= diff[i]; 
            cout << t << " " << j << " \n";
            if(t < 0) break;
            j++;
        }
        return j;
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
  // } Driver Code Ends