#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
	ll n;
	cin >> n;
	cout << n << " ";
	while(n != 1)
	{
		if(n % 2 == 0)
		{
			n /= 2;
		}
		else 
		{
			n *= 3;
			n++;
		}
		cout << n << " ";
	}
	cout << endl;
return 0;
}