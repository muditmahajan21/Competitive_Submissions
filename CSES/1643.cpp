#include "bits/stdc++.h"
using namespace std;
#define endl "\n"
#define ll long long int 

int main()
{
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++) {
                cin >> arr[i];
        }
        int ans = 0;
        int curr = 0;
        
        for(int i = 0; i < n; i++)
        {
        	if(arr[i] >= 0) 
        	{
        		curr += arr[i];
        	}
        	else 
        	{
        		ans = max(ans, curr);
        		curr = 0;
        	}
        }
        cout << curr << " \n";
        ans = max(ans, curr);

        cout << ans << endl;
        return 0;
}
