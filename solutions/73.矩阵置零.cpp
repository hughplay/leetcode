/*
 * @lc app=leetcode.cn id=73 lang=cpp
 *
 * [73] 矩阵置零
 */

// @lc code=start
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size(), n = matrix[0].size();
        bool column[n], zero;
        memset(column, false, sizeof(column));

        for (int i = 0; i < m; ++i)
        {
            zero = false;
            for (int j = 0; j < n; ++j)
            {
                if (matrix[i][j] == 0)
                {
                    zero = true;
                    break;
                }
            }
            if (zero)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (matrix[i][j] == 0)
                    {
                        column[j] = true;
                    }
                    matrix[i][j] = 0;
                }
            }
        }

        for (int j = 0; j < n; ++j)
        {
            if (column[j])
            {
                for (int i = 0; i < m; ++i)
                {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
// @lc code=end
