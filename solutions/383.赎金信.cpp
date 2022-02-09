/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        int stat[26];
        memset(stat, 0, sizeof(stat));
        for (char s : magazine)
        {
            stat[s - 'a'] ++;
        }
        for (char s : ransomNote)
        {
            stat[s - 'a'] --;
        }
        for (int i = 0; i < 26; ++i) {
            if (stat[i] < 0) {
                return false;
            }
        }
        return true;
    }
};
// @lc code=end
