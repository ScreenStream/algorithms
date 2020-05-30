#include "tree.h"

bool isValidBSTIterative(TreeNode* root) {
    if(!root) return true;
    std::stack<TreeNode*> nodes;
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

bool isValidBSTRecursiveHelper(TreeNode* node, TreeNode* &prev) {
    if (!node) return true;
    if (!isValidBSTRecursiveHelper(node->left, prev)) return false;
    if (prev && prev->val >= node->val) return false;
    prev = node;
    return isValidBSTRecursiveHelper(node->right, prev);
}

bool isValidBSTRecursive(TreeNode* root) {
    TreeNode* prev = nullptr;
    return isValidBSTRecursiveHelper(root, prev);
}


