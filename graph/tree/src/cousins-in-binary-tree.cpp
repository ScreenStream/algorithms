#include "tree.h"

using namespace std;

/*
 * In a binary tree, the root node is at depth 0, and children of each depth k node are at depth k+1.

Two nodes of a binary tree are cousins if they have the same depth, but have different parents.

We are given the root of a binary tree with unique values, and the values x and y of two different nodes in the tree.

Return true if and only if the nodes corresponding to the values x and y are cousins.
 */

bool isCousins(TreeNode* root, int x, int y) {
    if(!root) {
        return false;
    }

    queue<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();
        bool isX{false};
        bool isY{false};

        for(int i = 0; i < size; ++i) {
            TreeNode* node = nodes.front();
            nodes.pop();

            if(node->val == x)
                isX = true;
            if(node->val == y)
                isY = true;

            if(node->left && node->right) {
                if((node->left->val == x && node->right->val == y)
                   || (node->right->val == x && node->left->val == y)) {
                    return false;
                }
            }

            if(node->left)
                nodes.push(node->left);
            if(node->right)
                nodes.push(node->right);
        }

        if(isX && isY) {
            return true;
        }
    }

    return false;
}