/*
 * @lc app=leetcode.cn id=36 lang=cpp
 *
 * [36] 有效的数独
 */

// @lc code=start
class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        // vector<unordered_set<char>> row(9), column(9), grid(9);
        // for (int i = 0; i < 9; ++i)
        // {
        //     for (int j = 0; j < 9; ++j)
        //     {
        //         int n_grid = j / 3 * 3 + i / 3;
        //         if (board[i][j] == '.')
        //         {
        //             continue;
        //         }
        //         else if (row[i].find(board[i][j]) != row[i].end())
        //         {
        //             return false;
        //         }
        //         else if (column[j].find(board[i][j]) != column[j].end()) {
        //             return false;
        //         }
        //         else if (grid[n_grid].find(board[i][j]) != grid[n_grid].end()) {
        //             return false;
        //         }

        //         row[i].insert(board[i][j]);
        //         column[j].insert(board[i][j]);
        //         grid[n_grid].insert(board[i][j]);
        //     }
        // }
        // return true;
        // unordered_set<char> nine;
        // // row
        // for (int i = 0; i < 9; ++i)
        // {
        //     nine.clear();
        //     for (int j = 0; j < 9; ++j)
        //     {
        //         if (board[i][j] == '.')
        //         {
        //             continue;
        //         }
        //         else if (nine.find(board[i][j]) != nine.end())
        //         {
        //             return false;
        //         }
        //         nine.insert(board[i][j]);
        //     }
        // }
        // // column
        // for (int i = 0; i < 9; ++i)
        // {
        //     nine.clear();
        //     for (int j = 0; j < 9; ++j)
        //     {
        //         if (board[j][i] == '.')
        //         {
        //             continue;
        //         }
        //         else if (nine.find(board[j][i]) != nine.end())
        //         {
        //             return false;
        //         }
        //         nine.insert(board[j][i]);
        //     }
        // }
        // // grid
        // for (int i = 0; i < 9; ++i)
        // {
        //     nine.clear();
        //     for (int j = 0; j < 9; ++j)
        //     {
        //         int val = board[i % 3 * 3 + j % 3][i / 3 * 3 + j / 3];
        //         if (val == '.')
        //         {
        //             continue;
        //         }
        //         else if (nine.find(val) != nine.end())
        //         {
        //             return false;
        //         }
        //         nine.insert(val);
        //     }
        // }
        // return true;
        bool rows[9][9];
        bool columns[9][9];
        bool subboxes[3][3][9];

        memset(rows, false, sizeof(rows));
        memset(columns, false, sizeof(columns));
        memset(subboxes, false, sizeof(subboxes));
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char c = board[i][j];
                if (c != '.')
                {
                    int index = c - '0' - 1;
                    if (rows[i][index] || columns[j][index] || subboxes[i / 3][j / 3][index])
                    {
                        return false;
                    }
                    rows[i][index] = true;
                    columns[j][index] = true;
                    subboxes[i / 3][j / 3][index] = true;
                }
            }
        }
        return true;
    }
};
// @lc code=end
