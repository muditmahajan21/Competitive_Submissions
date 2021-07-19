/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
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
    ListNode* middleNode(ListNode* head) {
        int i, n = 0;
        ListNode* curr = head;
        while(curr != nullptr) {
            curr = curr->next;
            n++;
        }
        
        n = (n + 2) / 2;
        i = 0;
        curr = head;
        while(i != n - 1)
        {
            curr = curr->next;
            i++;
        }

        return curr;
    }
};
// @lc code=end

