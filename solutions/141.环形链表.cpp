/*
 * @lc app=leetcode.cn id=141 lang=cpp
 *
 * [141] 环形链表
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        // unordered_set<ListNode*> p;
        // while (head != NULL) {
        //     if (p.find(head) != p.end()) {
        //         return true;
        //     }
        //     p.insert(head);
        //     head = head->next;
        // }
        // return false;
        ListNode *fast = head, *slow = head;
        while (fast != NULL && fast->next != NULL && slow != NULL)
        {
            fast = fast->next->next;
            slow = slow->next;
            if (slow == fast)
            {
                return true;
            }
        }
        return false;
    }
};
// @lc code=end
