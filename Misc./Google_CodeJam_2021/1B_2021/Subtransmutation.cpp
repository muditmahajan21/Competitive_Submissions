#include <bits/stdc++.h>
using namespace std;
void solve() {
    
    int n,a,b;
    cin>>n>>a>>b;
    int arr[n];
    int m = n;
    for(int i=0;i<n;i++) cin>>arr[i];
    for(int i=n-1;i>=0;i--) {
        if(arr[i]) {
            n=i+1;
            break;
        }
    }
    int v[n+2];
    for(int i=0;i<n;i++) v[i] = arr[i];
    v[n] = 0;
    v[n+1] = 0;
    for(int i=0;i<n;i++) {
        int idx = i+2;
        int val = v[i]/2+v[i]%2;
        v[idx]+=val;
    }
    int ans = n+2;
    int mx = max(v[n],v[n+1]);
    // cout<<v[n]<<" "<<v[n+1]<<" ";
    while(mx!=1) {
        mx = mx/2+mx%2;
        ans+=2;
    }
    int  res  = ans;
    while(ans > n ) {
    	int tt[ans];
    	int x = ans;
    	bool fg=true;
    	tt[x-1] = 1;
    	// cout<<ans<<endl;
    	for(int i=x-1;i>=0;i--) {
    		if(i >=m ){
    			tt[i-1]+=tt[i];
    			tt[i-2]+=tt[i];
    		}
    		else {
    			tt[i]-=arr[i];
    			if(tt[i]< 0 ) {
    				// if(ans==6)  cout<<i<<" ";
    				fg=false;
    			}
    			tt[i-1]+=tt[i];
    			tt[i-2]+=tt[i];
    		}
    	}
    	if(fg) res=ans;
    	ans--;
    }
    cout<<res<<endl;
}
int main() {
    int t;
    cin>>t;
    for(int i=1;i<=t;i++) {
        cout<<"Case #"<<i<<": ";
        solve();
        // cout<<endl;
    }
    return 0;
}