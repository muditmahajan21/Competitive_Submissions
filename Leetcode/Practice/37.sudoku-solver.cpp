/*
 * @lc app=leetcode id=37 lang=cpp
 *
 * [37] Sudoku Solver
 */

// @lc code=start
class Solution {
public:

    bool is_valid(vector<vector<char>>& board, int row, int col, char c)
    {
        int i, j, n = 9;

        for(i = 0; i < n; i++)
        {
            if(board[i][col] == c)
            {
                return false;
            }
        }
        for(i = 0; i < n; i++)
        {
            if(board[row][i] == c)
            {
                return false;
            }
        }

        int box_x = (row / 3) * 3;
        int box_y = (col / 3) * 3;

        for(i = 0; i < n / 3; i++)
        {
            for(j = 0; j < n / 3; j++)
            {
                if(board[i + box_x][j + box_y] == c)
                {
                    return false;
                }
            }
        }

        return true;
    }

    bool dfs(vector<vector<char>>& board, int row, int col)
    {
        if(row == 9)
        {
            return true;
        }
        if(col == 9)
        {
            return dfs(board, row + 1, 0);
        }

        if(board[row][col] != '.')
        {
            return dfs(board, row, col + 1);
        }

        for(char i = '1'; i <= '9'; i++)
        {
            if(is_valid(board, row, col, i))
            {
                board[row][col] = i;

                if(dfs(board, row, col + 1))
                {
                    return true;
                }

                board[row][col] = '.';
            }
        }

        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        dfs(board, 0, 0);
    }
};
// @lc code=end

