/*
 * @lc app=leetcode id=160 lang=cpp
 *
 * [160] Intersection of Two Linked Lists
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
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* c1 = headA;
        ListNode* c2 = headB;
        while(true)
        {
            if(c1 == c2)
            {
                return c1;
            }
            else if(c1 == nullptr)
            {
                c1 = headA;
            }
            else if(c2 == nullptr)
            {
                c2 = headB;
            }
            else
            {
                c1 = c1 -> next;
                c2 = c2 -> next;
            }
        }
    }
};
// @lc code=end

