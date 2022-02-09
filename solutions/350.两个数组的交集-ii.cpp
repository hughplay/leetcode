/*
 * @lc app=leetcode.cn id=350 lang=cpp
 *
 * [350] 两个数组的交集 II
 */

// @lc code=start
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nums1_stat;
        vector<int> intersection;
        for (auto num : nums1) {
            if (nums1_stat.find(num) == nums1_stat.end()) {
                nums1_stat[num] = 1;
            } else {
                nums1_stat[num] += 1;
            }
        }
        for (auto num : nums2) {
            if (nums1_stat.find(num) != nums1_stat.end() && nums1_stat[num] > 0) {
                intersection.push_back(num);
                nums1_stat[num] -= 1;
            }
        }
        return intersection;
    }
};
// @lc code=end

