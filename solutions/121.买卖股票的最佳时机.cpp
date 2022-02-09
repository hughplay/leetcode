/*
 * @lc app=leetcode.cn id=121 lang=cpp
 *
 * [121] 买卖股票的最佳时机
 */

// @lc code=start
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = prices[0], max_profit = 0;
        for (auto price : prices) {
            max_profit = max(price - min_price, max_profit);
            min_price = min(min_price, price);
        }
        return max_profit;
    }
};
// @lc code=end

