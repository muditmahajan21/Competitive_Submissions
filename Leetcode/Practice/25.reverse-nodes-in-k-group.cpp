/*
 * @lc app=leetcode id=25 lang=cpp
 *
 * [25] Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* curr = head;
        int i;
        for(i = 0; i < k; i++) {
            if(curr == nullptr)
            {
                return head;
            }
            curr = curr->next;
        }

        ListNode* prev = nullptr;
        ListNode* temp = nullptr;

        curr = head;

        for(i = 0; i < k; i++) {
            temp = curr->next;
            curr -> next = prev;
            prev = curr;
            curr = temp;
        }

        if(curr != nullptr) {
            head -> next = reverseKGroup(curr, k);
        }
        return prev;
    }
};
// @lc code=end

