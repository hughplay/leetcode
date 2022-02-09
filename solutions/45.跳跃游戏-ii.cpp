/*
 * @lc app=leetcode.cn id=45 lang=cpp
 *
 * [45] 跳跃游戏 II
 */

// @lc code=start
class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int curr = 0, max_jump = 0;
        for (int step = 0;; ++step)
        {
            if (max_jump >= nums.size() - 1)
            {
                return step;
            }
            int max_jump_curr = max_jump;
            for (; curr <= max_jump; ++curr)
            {
                max_jump_curr = max(max_jump_curr, curr + nums[curr]);
            }
            max_jump = max_jump_curr;
        }
    }
};
// @lc code=end
