#include<bits/stdc++.h>
#define ll long long int
#define endl "\n"
#define MAX 1e6 + 5
#define MIN 0
using namespace std;

int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    
    for(ll t = 0; t < test; t++)
    {
        string str;
        cin >> str;

        ll count = 0, kick = 0, i;

	    for ( int i = 0 ; i < str.length() ; i++) 
        {
		    if (str[i] == 'K' && str[i + 1] == 'I' && str[i + 2] == 'C' && str[i + 3] == 'K') 
            {
                kick++;
			    continue;
		    }	

		    if (str[i] == 'S' && str[i + 1] == 'T' && str[i + 2] == 'A' && str[i + 3] == 'R' && str[i + 4] == 'T') 
            {
                count += kick;
		    }
	    }

        cout << "Case #" << t + 1 << ": " << count << endl;
    }

return 0;
}
