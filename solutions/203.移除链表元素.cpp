/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        ListNode *pre_head = new ListNode(-1);
        ListNode *prev = pre_head;
        prev->next = head;
        while (head != NULL)
        {
            if (head->val == val)
            {
                prev->next = head->next;
            }
            else
            {
                prev = prev->next;
            }
            head = head->next;
        }
        return pre_head->next;
    }
};
// @lc code=end
