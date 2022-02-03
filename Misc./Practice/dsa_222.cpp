// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


 // } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

bool comp(struct Item a, struct Item b)
{
    double first = double(a.value) / double(a.weight);
    double second = double(b.value) / double(b.weight);
    return first > second;
}

class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    

    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, comp);
        double ans = 0.0;
        int curr = 0;

        for(int i = 0; i < n; i++)
        {
            if(curr + arr[i].weight <= W)
            {
                curr += arr[i].weight;
                ans += arr[i].value;
            }
            else
            {
                int temp = W - arr[i].weight;
                double multi = double(temp) / double(arr[i].weight);
                ans += arr[i].value * multi;
                break;
            }
        }
        return ans;
    }
        
};


// { Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}  // } Driver Code Ends