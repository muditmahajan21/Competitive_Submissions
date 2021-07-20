/*
 * @lc app=leetcode id=234 lang=cpp
 *
 * [234] Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        string s1, s2;
        ListNode *curr = head;
        char c;

        s1 = "";
        while (curr != nullptr)
        {   
            c = char(curr -> val);
            s1 += c;
            curr = curr->next;  
        }

        s2 = string(s1.rbegin(),s1.rend());
        if(s1 == s2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
// @lc code=end

