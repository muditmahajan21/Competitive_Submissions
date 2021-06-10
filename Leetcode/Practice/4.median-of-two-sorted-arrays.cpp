/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans = 0.0;

        vector<int> final_arr;
        for(int i = 0; i < nums1.size(); i++) {
            final_arr.push_back(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++) {
            final_arr.push_back(nums2[i]);
        }

        sort(final_arr.begin(), final_arr.end());

        int n = final_arr.size();
        if(n % 2)
        {
            ans = double(final_arr[n / 2]);
        }
        else
        {   
            //cout << (double)3 / (double)2;
            ans = double(((double)final_arr[n / 2] + double((double)final_arr[n / 2 - 1])) / (double)2);
        }

        return ans;
    }
};
// @lc code=end

