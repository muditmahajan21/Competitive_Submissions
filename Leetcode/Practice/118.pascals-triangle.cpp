/*
 * @lc app=leetcode id=118 lang=cpp
 *
 * [118] Pascal's Triangle
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int i, j;
        vector<vector<int>> res;
        res.push_back( {1} );

        if(numRows == 1)
        {
            return res;
        }
        for(int i = 1; i < numRows; i++)
        {
            vector<int> temp(i + 1, 0);
            temp[0] = 1;
            temp[i] = 1;

            for(int j = 1; j < i; j++)
            {
                temp[j] = res[i - 1][j - 1] + res[i - 1][j];
            }
            res.push_back(temp);
        }

        return res;
    }
};
// @lc code=end

