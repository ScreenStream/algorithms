#include "tree.h"



/*
 * Given a binary tree, return the sum of values of its deepest leaves.
 *
 * Constraints:

The number of nodes in the tree is between 1 and 10^4.
The value of nodes is between 1 and 100.
 */

void helper(TreeNode* root, int& sum, int depth, const int max_depth)
{
    if(!root) {
        return;
    }

    if(!root->left && !root->right && depth == max_depth) {
        sum += root->val;
    }

    helper(root->left, sum, depth + 1, max_depth);
    helper(root->right, sum, depth + 1, max_depth);
}

/// DFS, recursive approach.
int deepestLeavesSum(TreeNode* root) {
    if(!root) {
        return 0;
    }

    int max_depth = maxDepth(root);

    int sum = 0;
    helper(root, sum, 1, max_depth);
    return sum;
}

/// BFS approach.
int deepestLeavesSumBFS(TreeNode* root) {
    if(!root) {
        return 0;
    }

    int res = 0;
    queue<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();
        res = 0;

        for(int i = 0; i < size; ++i) {
            auto node = nodes.front();
            nodes.pop();

            res += node->val;

            if(node->left) {
                nodes.push(node->left);
            }

            if(node->right) {
                nodes.push(node->right);
            }
        }
    }

    return res;
}