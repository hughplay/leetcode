/*
 * @lc app=leetcode.cn id=509 lang=cpp
 *
 * [509] 斐波那契数
 */

// @lc code=start
class Solution
{
public:
    int fib(int n)
    {
        if (n < 2)
        {
            return n;
        }
        int x = 0, y = 0, z = 1;
        while (n != 1)
        {
            x = y;
            y = z;
            z = x + y;
            --n;
        }
        return z;
    }
};
// @lc code=end

