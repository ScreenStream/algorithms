#include "breadth-first-traversal.h"

using namespace std;

/*
 * Given a binary tree, return the level order traversal of its nodes' values. (ie, from left to right, level by level).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its level order traversal as:
[
  [3],
  [9,20],
  [15,7]
]
 */

vector<vector<int>> levelOrderII(TreeNode* root) {
    if(!root) return {};

    vector<vector<int>> res;

    queue<TreeNode*> nodes;
    nodes.push(root);

    while(!nodes.empty()) {
        int size = nodes.size();
        vector<int> levelRes;

        while(size) {
            TreeNode* node = nodes.front();
            nodes.pop();
            --size;

            levelRes.push_back(node->val);

            if(node->left)
                nodes.push(node->left);
            if(node->right)
                nodes.push(node->right);
        }

        res.push_back(levelRes);
    }

    return res;
}
