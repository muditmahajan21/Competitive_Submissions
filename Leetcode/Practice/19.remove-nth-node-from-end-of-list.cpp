/*
 * @lc app=leetcode id=19 lang=cpp
 *
 * [19] Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i, m = 0;
        ListNode* curr = head;
        while(curr != nullptr) {
            curr = curr->next;
            m++;
        }
        
        n = (m - n) + 1;
        i = 0;
        curr = nullptr;
        ListNode* prev = nullptr;
        ListNode* temp = nullptr;
        
        while(i < n)
        {   
            if(i == 0)
            {
                curr = head;
                i++;
                continue;
            }
            prev = curr;
            curr = curr->next;
            i++;
            temp = curr -> next;
        }

        if(prev == nullptr)
        {
            return head -> next;
        }
        if(temp == nullptr)
        {
            prev -> next = nullptr;
            return head;
        }
        else
        {
            prev -> next = temp;
            return head;
        }
    }
};
// @lc code=end

