

	// Add your code here
    Difference(vector<int> arr):elements(arr)
    {   }

    void computeDifference()
    {
        sort(elements.begin(), elements.end());
        int n = elements.size();
        int diff = elements[n - 1] - elements[0];
        if(diff < 0)
        {
            diff = diff * -1;
        }
        maximumDifference = diff;
    }
