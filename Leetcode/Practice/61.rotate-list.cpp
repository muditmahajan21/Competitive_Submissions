/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head-> next == nullptr)
        {
            return head;
        }
        int i, n = 0;
        
        ListNode* curr = head;
        while (curr -> next != nullptr)
        {
            curr = curr->next;
            n++;
        }

        n++;

        ListNode *temp = head;
        
        for(i = n - k % n ; i > 1 ; i--) 
		{
            temp = temp->next;
        }

        curr -> next = head;
        head = temp -> next;
        temp -> next = nullptr;\
        return head;
    }
};
// @lc code=end

