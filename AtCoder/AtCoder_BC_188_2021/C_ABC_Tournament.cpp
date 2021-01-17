#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    ll i, j, k, n, temp, count = 0, ans = 0, sum = 0;
    cin >> n;
    
    n = pow(2, n);

    vector<ll> arr(1<<n);

    map<ll, ll> mp;

    for(i = 0; i < n; i++)
    {   
        cin >> arr[i];
        mp[arr[i]] = (i);
    }   

    while(arr.size() > 1) 
    {
  	    if(arr.size() == 2) 
        {
  		    ans = mp[min(arr[0], arr[1])];
  		break;
  	    }
  	    
          vector<ll> t;
  	    for(i = 0;i < arr.size(); i += 2) 
        {
  		    t.push_back(max(arr[i], arr[i + 1]));
      	}
  	arr = t;
    }

  cout<<ans+1;



return 0;
}
