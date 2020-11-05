#include<bits/stdc++.h> 
using namespace std; 

long long int getMaxLength(long long int arr[], long long int n) 
{ 
	long long int count = 0; 
	long long int result = 0; 

	for (long long int i = 0; i < n; i++) 
	{ 
		if (arr[i] == 1) 
			count = 0; 
        else
		{ 
			count++;
			result = max(result, count); 
		} 
	} 
    return result; 
} 

int main() 
{ 
	long long int test;
    cin >> test;
    while(test--) 
	{
        long long int size, temp;
        cin >> size;
        long long int arr[size];
        for(long long int i = 0; i < size; i++)
        {
            cin >> temp;
            arr[i] = temp;
        }

        long long int n = sizeof(arr) / sizeof(arr[0]); 
	    long long int max_cont = getMaxLength(arr, n);

        if(max_cont % 2 == 0)
        {
            cout << "No" << endl;
        }
        else if(max_cont % 2 != 0)
        {
            cout << "Yes" << endl;
        }
    } 
return 0; 
} 
