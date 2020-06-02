#include "dfs.h"

#include "nodes.h"

/*
 * Given a binary tree, determine if it is a valid binary search tree (BST).

Assume a BST is defined as follows:

The left subtree of a node contains only nodes with keys less than the node's key.
The right subtree of a node contains only nodes with keys greater than the node's key.
Both the left and right subtrees must also be binary search trees.
 

Example 1:

    2
   / \
  1   3

Input: [2,1,3]
Output: true
Example 2:

    5
   / \
  1   4
     / \
    3   6

Input: [5,1,4,null,null,3,6]
Output: false
Explanation: The root node's value is 5 but its right child's value is 4.
 */

bool isValidBSTRecursiveHelper(TreeNode* node, TreeNode* &prev) {
    if (!node) return true;
    if (!isValidBSTRecursiveHelper(node->left, prev)) return false;
    if (prev && prev->val >= node->val) return false;
    prev = node;
    return isValidBSTRecursiveHelper(node->right, prev);
}

/// Recursive DFS.
bool isValidBST(TreeNode* root) {
    TreeNode* prev = nullptr;
    return isValidBSTRecursiveHelper(root, prev);
}

/// Iterative DFS.
bool isValidBST1(TreeNode* root) {
    if(!root) return true;
    stack<TreeNode*> nodes;
    TreeNode* pre = nullptr;

    while(root || !nodes.empty()) {
        while(root) {
            nodes.push(root);
            root = root->left;
        }

        root = nodes.top();
        nodes.pop();

        if(pre && root->val <= pre->val)
            return false;

        pre = root;
        root = root->right;
    }

    return true;
}
