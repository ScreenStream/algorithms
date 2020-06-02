#include "tree.h"



/*
 * Given a binary tree, imagine yourself standing on the right side of it, return the values of the nodes you can see ordered from top to bottom.

Example:

Input: [1,2,3,null,5,null,4]
Output: [1, 3, 4]
Explanation:

   1            <---
 /   \
2     3         <---
 \     \
  5     4       <---
 */

/// This helper method traverses tree in MODIFIED preorder fashion --> root, right, left.
void helper(vector<int>& res, TreeNode* root, int level)
{
    if(!root) {
        return;
    }

    if(res.size() == level) { /// In every level, we will just be pushing back one item to the vector which is the rightmost item in the level.
        res.push_back(root->val);
    }

    helper(res, root->right, level + 1);
    helper(res, root->left, level + 1);
}

vector<int> rightSideView(TreeNode* root) {
    vector<int> res;
    helper(res, root, 0);
    return res;
}

/////////////////

vector<int> rightSideViewBFS(TreeNode* root) {
    if(!root) {
        return {};
    }

    vector<int> res;

    queue<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();
        int rightVal = 0;

        while(size) {
            TreeNode* node = nodes.front();
            nodes.pop();
            --size;

            rightVal = node->val;

            if(node->left)
                nodes.push(node->left);
            if(node->right)
                nodes.push(node->right);
        }

        res.push_back(rightVal);
    }

    return res;
}