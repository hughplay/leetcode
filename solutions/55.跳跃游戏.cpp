/*
 * @lc app=leetcode.cn id=55 lang=cpp
 *
 * [55] 跳跃游戏
 */

// @lc code=start
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_dist = 0;
        for (int i = 0; i < nums.size(); ++i) {
            max_dist = max(max_dist, i + nums[i]);
            if (max_dist <= i && i != nums.size() - 1) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end

