#include "tree.h"

using namespace std;

/*
 * Given a binary tree, determine if it is a complete binary tree.

Definition of a complete binary tree from Wikipedia:
In a complete binary tree every level, except possibly the last, is completely filled, and all nodes in the last level are as far left as possible.
 It can have between 1 and 2h nodes inclusive at the last level h.
 */

/// Modified BFS Approach
bool isCompleteTree(TreeNode* root) {
    if(!root) {
        return false;
    }

    queue<TreeNode*> nodes;
    nodes.push(root);
    bool premature_end = false;

    while(!nodes.empty()) {
        auto node = nodes.front();
        nodes.pop();

        if(node)
        {
            if(premature_end) {
                return false;
            }

            nodes.push(node->left); /// Unlike the classical BFS approach, we also store nullptr node values inside the queue in this algorithm.
            nodes.push(node->right);
        } else {
            premature_end = true;
        }
    }

    return true;
}

//////////////////////////
/// DFS Approach.

bool helper(TreeNode* root, int idx, int total) {
    if (!root) {
        return true;
    }

    if (idx > total) {
        return false;
    }

    return helper(root->left, idx * 2, total) && helper(root->right, idx * 2 + 1, total);
}

bool isCompleteTreeDFS(TreeNode* root) {
    int total = totalNodeCount(root);
    return helper(root, 1, total);
}



