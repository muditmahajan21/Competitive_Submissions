/*
 * @lc app=leetcode id=21 lang=cpp
 *
 * [21] Merge Two Sorted Lists
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* curr1 = l1;
        ListNode* curr2 = l2;

        ListNode* ans = new ListNode();
        ListNode* curr = ans;

        while(curr1 != nullptr and curr2 != nullptr) 
        {
            if(curr1 -> val <= curr2 -> val)
            {
                curr -> next = curr1;
                curr1 = curr1 -> next;
            }
            else
            {
                curr -> next = curr2;
                curr2 = curr2 -> next;
            }
            curr = curr -> next;
        }
        if(curr1 != nullptr)
        {
            curr -> next = curr1;
        }
        if(curr2 != nullptr)
        {
            curr -> next = curr2;
        }
        return ans -> next;
    }
};
// @lc code=end

