/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        int stat[26];
        memset(stat, 0, sizeof(stat));
        for (auto c : s)
        {
            stat[c - 'a']++;
        }
        for (auto c : t)
        {
            stat[c - 'a']--;
        }
        for (int i = 0; i < 26; ++i)
        {
            if (stat[i] != 0)
            {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
