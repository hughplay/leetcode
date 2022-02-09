/*
 * @lc app=leetcode.cn id=740 lang=cpp
 *
 * [740] 删除并获得点数
 */

// @lc code=start
class Solution
{
public:
    int deleteAndEarn(vector<int> &nums)
    {
        // merge the same values
        sort(nums.begin(), nums.end());
        vector<int> merge_nums;
        int last_num = -1;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == last_num)
            {
                merge_nums[merge_nums.size() - 1] = merge_nums.back() + nums[i];
            }
            else
            {
                if (nums[i] != last_num + 1)
                {
                    merge_nums.push_back(0);
                }
                merge_nums.push_back(nums[i]);
                last_num = nums[i];
            }
        }

        // tranform the problem into the thief problem
        int max_prev = 0, max_curr = merge_nums[0];
        for (int i = 1; i < merge_nums.size(); ++i)
        {
            int max_count = max(max_prev + merge_nums[i], max_curr);
            max_prev = max_curr;
            max_curr = max_count;
        }
        return max_curr;
    }
};
// @lc code=end
