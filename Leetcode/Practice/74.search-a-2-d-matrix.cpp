/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
 */

// @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size(); 
        int l = 0;
        int r = n - 1;
        
        while(l <= r)
        {
            int mid = (l + r) / 2;

            if(matrix[mid][0] == target)
            {
                return true;
            }
            if(matrix[mid][m - 1] == target)
            {
                return true;
            }

            if(target > matrix[mid][0] and target < matrix[mid][m - 1])
            {
                int l_inner = 0;
                int r_inner = m - 1;
                int row = mid;
                int mid_inner = 0;

                while(l_inner <= r_inner)
                {
                    mid_inner = (l_inner + r_inner) / 2;
                    if(matrix[row][mid_inner] == target)
                    {
                        return true;
                    }
                    if(matrix[row][mid_inner] > target)
                    {
                        r_inner = mid_inner - 1;
                    }
                    if(matrix[row][mid_inner] < target)
                    {
                        l_inner = mid_inner + 1;
                    }
                }
                return false;
            }

            if(target < matrix[mid][0])
            {
                r = mid - 1;
            }
            if(target > matrix[mid][m - 1])
            {
                l = mid + 1;
            }
        }
        return false;
    }
};
// @lc code=end

