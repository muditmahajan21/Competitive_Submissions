// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max_so_far = INT_MIN, max_ending_here = 0;

	for (int i = 0; i < size; i++)
	{
		max_ending_here = max_ending_here + a[i];
		if (max_so_far < max_ending_here)
			max_so_far = max_ending_here;

		if (max_ending_here < 0)
			max_ending_here = 0;
	}
	return max_so_far;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int t;
    cin >>t;
    while(t--)
	{   int n, k;
        cin  >> n >> k;
        int arr[n];
        for(i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << max_sum << endl;
    }
	return 0;
}
