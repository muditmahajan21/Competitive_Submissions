#include "bits/stdc++.h"
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{
	ll i, n;
	cin >> n;
	ll arr[n - 1];
	bool flag = false;
	for(i = 0; i < n - 1; i++)
	{
		cin >> arr[i]; 
	}

	sort(arr, arr + n - 1);

	for(i = 0; i < n - 1; i++)
	{
		if(arr[i] != i + 1)
		{
			cout << i + 1 << endl;
			flag = true;
			break;
		}
	}

	if(!flag)
	{
		cout << n << endl;
	}

return 0;
}