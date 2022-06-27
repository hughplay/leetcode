/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char top;
        for (char x : s) {
            if (x == '(' || x == '{' || x == '[') {
                st.push(x);
            } else {
                if (st.empty()) {
                    return false;
                }
                top = st.top();
                if ((x == ')' and top != '(') || (x == ']' and top != '[') || (x == '}' and top != '{')) {
                    return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};
// @lc code=end

