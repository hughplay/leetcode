/*
 * @lc app=leetcode.cn id=1137 lang=cpp
 *
 * [1137] 第 N 个泰波那契数
 */

// @lc code=start
class Solution
{
public:
    int tribonacci(int n)
    {
        if (n < 2)
        {
            return n;
        } else if (n == 2) {
            return 1;
        }

        int x = 0, y = 1, p = 1, q = 2;
        while (n != 3)
        {
            x = y;
            y = p;
            p = q;
            q = x + y + p;
            --n;
        }
        return q;
    }
};
// @lc code=end
