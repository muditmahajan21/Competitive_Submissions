/*
 * @lc app=leetcode id=141 lang=cpp
 *
 * [141] Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;

        do
        {
            if(slow == nullptr || fast == nullptr || fast -> next == nullptr)
            {
                return false;
            }
            fast = fast -> next -> next;
            slow = slow -> next;
        }while(slow != fast);

        return true;
    }
};
// @lc code=end

