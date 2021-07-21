/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start

// Definition for a Node

/*
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
        map<Node*, Node*> mp;
        Node* curr = head;
        
        for(curr = head; curr != NULL; curr = curr->next) {
            Node* temp = new Node(curr->val); 
            mp[curr] = temp;
        }

        curr = head;

        for(curr = head; curr != NULL; curr = curr -> next)
        {
            Node* temp = mp[curr];
            temp -> next = mp[curr -> next];
            temp -> random = mp[curr -> random];
        }

        Node* ans;
        ans = mp[head];
        return ans;
    }
};
// @lc code=end

