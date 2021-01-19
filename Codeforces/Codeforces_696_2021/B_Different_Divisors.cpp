#include "bits/stdc++.h"
#define ll long long int
#define endl "\n"
using namespace std;
 
bool isPrime(ll n) 
{ 
	
	if (n <= 1) return false; 
	if (n <= 3) return true; 
	
	if (n%2 == 0 || n%3 == 0) return false; 
	
	for (ll i=5; i*i<=n; i=i+6) 
		if (n%i == 0 || n%(i+2) == 0) 
		return false; 
	
	return true; 
} 

ll nextPrime(ll N) 
{ 
	if (N <= 1) 
		return 2; 
    
	int prime = N; 
	bool found = false; 

	while (!found) { 
		prime++; 

		if (isPrime(prime)) 
			found = true; 
	} 

	return prime; 
} 


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin >> test;
    while(test--)
    {
        ll i, j, k, n, temp, count = 0, ans = 1, sum = 0;
        cin >> n;

        i = nextPrime(n);
        j = nextPrime(i + n - 1); 

        cout << i * j << endl;
    }

return 0;
}