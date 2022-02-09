/*
 * @lc app=leetcode.cn id=387 lang=cpp
 *
 * [387] 字符串中的第一个唯一字符
 */

// @lc code=start
class Solution
{
public:
    int firstUniqChar(string s)
    {
        int stat[26];
        memset(stat, 0, sizeof(stat));
        for (auto c : s)
        {
            stat[c - 'a']++;
        }
        for (int i = 0; i < s.size(); ++i)
        {
            if ((stat[s[i] - 'a']) == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
// @lc code=end
