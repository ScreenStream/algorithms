#include "bfs.h"

using namespace std;

/*
 * Given a binary tree, find its minimum depth.

The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

Note: A leaf is a node with no children.

Example:

Given binary tree [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
return its minimum depth = 2.
 */

int minDepth(TreeNode* root) {
    if(!root) {
        return 0;
    }

    queue<TreeNode*> nodes;
    int res = 1;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();

        while(size) {
            TreeNode* node = nodes.front();
            nodes.pop();
            --size;

            if(!node->left && !node->right) {
                return res;
            }

            if(node->left)
                nodes.push(node->left);
            if(node->right)
                nodes.push(node->right);
        }

        ++res;
    }

    return res;
}