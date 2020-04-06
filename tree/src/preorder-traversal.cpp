#include "tree.h"

/*
 * Given a binary tree, return the preorder traversal of its nodes' values.

Example:

Input: [1,null,2,3]
   1
    \
     2
    /
   3

Output: [1,2,3]
Follow up: Recursive solution is trivial, could you do it iteratively?
 */

std::vector<int> preorderTraversalIterative(TreeNode* root)
{
    if(!root) return {};

    std::vector<int> res;

    std::stack<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        root = nodes.top();
        nodes.pop();
        res.push_back(root->val);

        /// Convention: always check pointer before storing them in a data structure. Usually it is bad practice to store nullptr, otherwise it the code gets longer.
        if(root->right)
            nodes.push(root->right);
        if(root->left)
            nodes.push(root->left);
    }

    return res;
}

/// This version only stores right pointers in the stack. root = root->left needed to traverse to left.
std::vector<int> preorderTraversalIterative2(TreeNode* root)
{
    std::vector<int> res;
    std::stack<TreeNode*> nodes;

    while(root || !nodes.empty()) {
        if(root) {
            res.push_back(root->val);
            nodes.push(root->right);
            root = root->left;
        } else {
            root = nodes.top();
            nodes.pop();
        }
    }

    return res;
}

void preorderTraversalRecursiveHelper(TreeNode* root, std::vector<int>& nodes) {
    if (!root) return;
    nodes.push_back(root->val);
    preorderTraversalRecursiveHelper(root->left, nodes);
    preorderTraversalRecursiveHelper(root->right, nodes);
}

std::vector<int> preorderTraversalRecursive(TreeNode* root)
{
    std::vector<int> nodes;
    preorderTraversalRecursiveHelper(root, nodes);
    return nodes;
}
