/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *curr1 = l1;
        ListNode *curr2 = l2;

        int c=0;

        ListNode * ans = new ListNode(0);
        ListNode*temp = ans;

        while(curr1 != nullptr || curr2 != nullptr) 
        {
            int a, b, s = 0;
            if(curr1 != nullptr)
            {
                a = curr1 -> val;
            }
            else
            {
                a = 0;
            }
            if(curr2 != nullptr)
            {
                b = curr2 -> val;
            }
            else
            {
                b = 0;
            }

            s = a + b + c;
            c = s / 10;

            temp -> next = new ListNode(s % 10);
            temp = temp->next;

            if(curr1 != nullptr)
            {
                curr1 = curr1->next;
            }
            if(curr2 != nullptr)
            {
                curr2 = curr2->next;
            }
        }

        if(c > 0)
        {
            temp -> next = new ListNode(c);
        }

        return ans -> next;
    }
};
// @lc code=end

