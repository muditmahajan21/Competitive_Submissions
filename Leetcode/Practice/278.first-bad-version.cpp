/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l, r;
        l = 1;
        r = n;
        int mid;

        while(l <= r)
        {
            mid = l + (r - l) / 2;
            if(!isBadVersion(mid))
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        return r + 1;
    }
};
// @lc code=end

