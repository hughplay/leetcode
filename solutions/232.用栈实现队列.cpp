/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
    stack<int> s_head, s_tail;
public:
    MyQueue() {
    }
    
    void push(int x) {
        s_tail.push(x);
    }
    
    int pop() {
        int res = peek();
        s_head.pop();
        return res;
    }
    
    int peek() {
        transfer();
        return s_head.top();
    }

    void transfer() {
        if (s_head.empty()) {
            while (!s_tail.empty()) {
                s_head.push(s_tail.top());
                s_tail.pop();
            }
        }
    }
    
    bool empty() {
        return s_head.empty() && s_tail.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

