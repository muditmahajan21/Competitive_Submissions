#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

void generate_gray_codes(int n)
{
        int arr[1 << n + 1];
        memset(arr, 0, sizeof(arr));
        int i;
        for(i = 0; i < n; i++)
        {
                cout << 0;
        }
        cout << endl;

        arr[0] = 1;
        int x = 0;

        for(i = 0;i < 1 << n; i++)
        {
                for(int j = 0; j < n; j++)
                {
                        int y = x ^ (1 << j);
    		            if (!arr[y]) 
                        {
    			                x = y;
    			                arr[y] = 1;
				                string s;
				                while (y) 
                                {
					                    if (y&1) s += '1';
					                    else s += '0';
					                    y >>= 1;
				                }
				        reverse(s.begin(), s.end());
				        for (int i = 0; i < n - s.size(); i++)
					            cout<<0;
				        cout<<s<<endl;
				        break;             
                        }
                }
                
        }
}

int main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n;
        cin >> n;
        generate_gray_codes(n);
return 0;
}
