#include "depth-first-traversal.h"

/*
 * Given a binary tree, return the inorder traversal of its nodes' values.

Example:

Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,3,2]
Follow up: Recursive solution is trivial, could you do it iteratively?
 */

vector<int> inorderTraversalIterative(TreeNode* root)
{
    if(!root) return {};
    vector<int> res;

    stack<TreeNode*> nodes;

    while(root || !nodes.empty()) {
        while(root) {
            nodes.push(root);
            root = root->left;
        }

        root = nodes.top(); // DO NOT ASSIGN POPPED VALUE TO A NEW NODE! THIS NODE IS THE ROOT!
        nodes.pop();
        res.push_back(root->val);
        root = root->right;
    }

    return res;
}

void inorderTraversalRecursiveHelper(TreeNode* root, vector<int>& res)
{
    if(!root) return;

    inorderTraversalRecursiveHelper(root->left, res);
    res.push_back(root->val);
    inorderTraversalRecursiveHelper(root->right, res);
}

vector<int> inorderTraversalRecursive(TreeNode* root) {
    vector<int> res;
    inorderTraversalRecursiveHelper(root, res);
    return res;
}


