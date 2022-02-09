/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        // ListNode *head, *tmp;
        // if (list1 == NULL || (list2 != NULL && list1->val > list2->val))
        // {
        //     tmp = list1;
        //     list1 = list2;
        //     list2 = tmp;
        // }
        // head = list1;

        // while (list2 != NULL)
        // {
        //     if (list1->next != NULL && list1->next->val <= list2->val)
        //     {
        //         list1 = list1->next;
        //     }
        //     else
        //     {
        //         tmp = list1->next;
        //         list1->next = list2;
        //         list2 = tmp;
        //     }
        // }
        // return head;
        ListNode *pre_head = new ListNode(-1);
        ListNode *p = pre_head;

        while (list1 != NULL && list2 != NULL)
        {
            if (list1->val < list2->val)
            {
                p->next = list1;
                list1 = list1->next;
            }
            else
            {
                p->next = list2;
                list2 = list2->next;
            }
            p = p->next;
        }
        p->next = list1 != NULL ? list1 : list2;
        return pre_head->next;
    }
};
// @lc code=end