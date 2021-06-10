/*
 * @lc app=leetcode id=101 lang=cpp
 *
 * [101] Symmetric Tree
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(!root) return false;
        TreeNode* left, *right;

        queue<TreeNode*> q_left, q_right;
        q_left.push(root -> left);
        q_right.push(root -> right);

        while(!q_left.empty() and !q_right.empty()) {
            left = q_left.front();
            right = q_right.front();

            q_left.pop();
            q_right.pop();

            if(!left and !right)
            {
                continue;
            }
            if(!left and right)
            {
                return false;
            }
            if(left and !right)
            {
                return false;
            }
            if(left -> val != right -> val)
            {
                return false;
            }

            q_left.push(left -> left);
            q_left.push(left -> right);

            q_right.push(right -> right);
            q_right.push(right -> left);
        }

        return true;
    }
};
// @lc code=end

