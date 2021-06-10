/*
 * @lc app=leetcode id=73 lang=cpp
 *
 * [73] Set Matrix Zeroes
 */

// @lc code=start
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int i, j, m = matrix.size(), n = matrix[0].size();
        bool col = false, row = false;
        
        for(i = 0; i < m; i++)
        {
            if(!matrix[i][0])
            {
                col = true;
                break;
            }    
        }   

        for(j = 0; j < n; j++)
        {
            if(!matrix[0][j])
            {
                row = true;
                break;
            }
        }

        for(i = 1; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                if(!matrix[i][j])
                {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        for(i = 1; i < m; i++)
        {
            for(j = 1; j < n; j++)
            {
                if(!matrix[i][0] || !matrix[0][j])
                {
                    matrix[i][j] = 0;
                }
            }
        }

        if(col)
        {
            for(i = 0; i < m; i++)
            {
                matrix[i][0] = 0;
            }
        }
        if(row)
        {
            for(j = 0; j < n; j++)
            {
                matrix[0][j] = 0;
            }
        }
    }
};
// @lc code=end

